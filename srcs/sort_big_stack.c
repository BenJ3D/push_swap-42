/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:47:13 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/14 19:54:13 by bducrocq         ###   ########.fr       */
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
	while (y < 2)
	{
		// ft_lstprint_stack_a_b((data)->stacka, (data)->stackb, "stack a", "stack b");
		printf("tour %i/n", y);
		if (check_stacka_is_sort(data) == 1 && lena == 0)
		{
			printf("stacka est triée\n");
			break ; 
		}
		while(lena > 0)
		{
			if ((tmpa->index >> i) & 1)
				op_pb(data);
			op_ra(data);
			tmpa = data->stacka;
			lena--;
		}
		if (lena == 0)
		{
			while (ft_lstsize(data->stackb) > 0)
			{
				op_pa(data);
				ft_lstprint_stack_a_b((data)->stacka, (data)->stackb, "stack a", "stack b");
			}
			i++;
			lena = ft_lstsize(data->stacka);
		}
		y++;
	}
	return (0);
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