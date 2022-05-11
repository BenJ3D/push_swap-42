/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:47:13 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/11 19:44:36 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_big_stack(t_data *data)
{
	printf("start big sort\n");
	int	i;
	t_list	*tmpa;
	int	y;

	tmpa = data->stacka;
	i = 0;
	y = 0;
	while(y < 10)
	{
		if ((tmpa->index << i) & 1)
			op_pb(data);
		op_ra(data);
		tmpa = data->stacka;
		y++;
		// if (check_if_the_list_is_sorted(data))
		// 	break;
	}
	return (0);
}