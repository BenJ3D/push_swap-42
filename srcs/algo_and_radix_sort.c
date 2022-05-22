/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:47:13 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 15:18:00 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	radix_sort(t_data	*data)
{
	int		i;
	int		j;
	int		lena;
	t_list	*tmpa;

	i = 0;
	tmpa = data->stacka;
	lena = ft_lstsize(tmpa);
	while (1)
	{
		j = lena;
		while (j-- > 0)
		{
			tmpa = data->stacka;
			if ((tmpa->index >> i) & 1)
				op_ra(data);
			else
				op_pb(data);
		}
		while (ft_lstsize(data->stackb) != 0)
			op_pa(data);
		i++;
		if (check_stacka_is_sort(data))
			break ;
	}
}

int	sort_three_arg(t_data *data)
{
	int	a;
	int	b;
	int	c;

	a = data->stacka->content;
	b = data->stacka->next->content;
	c = data->stacka->next->next->content;
	if (b < a && b < c && a < c)
		op_sa(data);
	else if (c < b && b < a)
	{
		op_sa(data);
		op_rra(data);
	}
	else if (b < a && b < c && a > c)
		op_ra(data);
	else if (a < b && b > c && a < c)
	{
		op_sa(data);
		op_ra(data);
	}
	else if (a < b && b > c && a > c)
		op_rra(data);
	return (0);
}

int	pushb_index_min_for5(t_data *data)
{
	int		count0;
	int		count1;

	count0 = search_pos_index(data->stacka, 0);
	if (count0 > 3)
		while (data->stacka->index != 0)
			op_rra(data);
	else
		while (data->stacka->index != 0)
			op_ra(data);
	op_pb(data);
	count1 = search_pos_index(data->stacka, 1);
	if (count1 > 3)
		while (data->stacka->index != 1)
			op_rra(data);
	else
		while (data->stacka->index != 1)
			op_ra(data);
	op_pb(data);
	if (data->stackb->index < data->stackb->next->index)
		op_rb(data);
	return (0);
}

int	pushb_index_min_for4(t_data *data)
{
	if (data->stacka->next->next->next->index == 0)
		op_rra(data);
	else
	{
		while (data->stacka->index != 0)
			op_ra(data);
	}
	op_pb(data);
	return (0);
}

int	sort_five_arg(t_data *data)
{	
	if (data->nbr_arg == 5)
		pushb_index_min_for5(data);
	else
		pushb_index_min_for4(data);
	sort_three_arg(data);
	if (data->nbr_arg == 4)
		op_pa(data);
	else
	{
		op_pa(data);
		op_pa(data);
	}
	return (0);
}
