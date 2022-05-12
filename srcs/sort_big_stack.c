/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:47:13 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/12 19:40:22 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_big_stack(t_data *data)
{
	printf("start big sort\n");
	int		i;
	t_list	*tmpa;
	int		lena;
	
	lena = ft_lstsize(data->stacka);
	tmpa = data->stacka;
	i = 0;
	while (lena >= 0)
	{
		if (check_stacka_is_sort(data) == 1 && lena == 0)
		{
			printf("stacka est triée\n");
			break ;
		}
		if (lena == 0)
		{
			while (ft_lstsize(data->stackb) > 0)
				op_pa(data);
			i++;
			lena = ft_lstsize(data->stacka);
		}
		if ((tmpa->index >> i) & 1)
			op_pb(data);
		op_ra(data);
		tmpa = data->stacka;
		lena--;
	}
	return (0);
}

int	sort_three_arg(t_data *data)
{
	
	
	return (0);
}