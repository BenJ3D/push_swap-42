/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:47:13 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/18 16:44:34 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int sort_big_stack(t_data *data) // TODO:
// {
// 	printf("start big sort\n");
// 	int i;
// 	t_list *tmpa;
// 	int lena;
// 	lena = ft_lstsize(data->stacka);
// 	tmpa = data->stacka;
// 	i = 0;
// 	while (lena >= 0)
// 	{
// 		ft_lstprint_stack_a_b((data)->stacka, (data)->stackb, "stack a", "stack b");
// 		if (check_stacka_is_sort(data) == 1 && lena == 0)
// 		{
// 			printf("stacka est triée\n");
// 			break;
// 		}
// 		if (lena == 0)
// 		{
// 			while (ft_lstsize(data->stackb) > 0)
// 				op_pa(data);
// 			i++;
// 			lena = ft_lstsize(data->stacka);
// 		}
// 		if ((tmpa->index >> i) & 1)
// 			op_pb(data);
// 		op_ra(data);
// 		tmpa = data->stacka;
// 		lena--;
// 	}
// 	return (0);
// }

int sort_big_stack(t_data *data) //TODO:
{
	printf("start big sort\n");
	int		i;
	int		y;
	t_list	*tmpa;
	int		lena;
	
	lena = ft_lstsize(data->stacka);
	tmpa = data->stacka;
	i = 0;
	while (y < 4)
	{
		if (check_stacka_is_sort(data) == 1 && lena == 0)
			break ; 
		while(lena > 0)
		{
			if ((tmpa->index >> i) & 1)
				op_ra(data);
			else
				op_pb(data);
			tmpa = data->stacka;
			lena--;
		}
		if (lena == 0)
		{
			while (ft_lstsize(data->stackb) > 0)
				op_pa(data);
			i++;
			lena = ft_lstsize(data->stacka);
		}
		y++;
	}
	return (0);
}

void radix_sort(t_data	*data)
{
	int i;
	int j;
	int lena;
	t_list *tmpa;

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

int	search_pos_index(t_list *lst, int index)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		if (tmp->index == index)
			break;
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int	pushb_index_min_for5(t_data *data)
{
	int		count0;
	int		count1;

	count0 = search_pos_index(data->stacka, 0);
	if (count0 > 3)
		while(data->stacka->index != 0)
			op_rra(data);
	else
		while(data->stacka->index != 0)
			op_ra(data);
	op_pb(data);
	ft_lstprint_stack_a_b((data)->stacka, (data)->stackb, "stack a", "stack b");
	count1 = search_pos_index(data->stacka, 1);
	if (count1 > 3)
		while(data->stacka->index != 1)
			op_rra(data);
	else
		while(data->stacka->index != 1)
			op_ra(data);
	op_pb(data);
	if (data->stackb->index < data->stackb->next->index)
			op_rb(data);
	ft_lstprint_stack_a_b((data)->stacka, (data)->stackb, "stack a", "stack b");
	return (0);
}

int	pushb_index_min_for4(t_data *data)
{
	ft_lstprint_stack_a_b((data)->stacka, (data)->stackb, "stack a", "stack b");
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
	ft_lstprint_stack_a_b((data)->stacka, (data)->stackb, "stack a", "stack b");
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