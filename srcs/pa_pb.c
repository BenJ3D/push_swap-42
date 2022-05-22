/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 14:05:15 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_pa(t_data *data)
{
	if (!(operation_push(&data->stacka, &data->stackb)))
		ft_putstr("pa\n");
}

void	op_pb(t_data *data)
{
	if (!(operation_push(&data->stackb, &data->stacka)))
		ft_putstr("pb\n");
}

int	operation_push(t_list **lstdst, t_list **lstsrc)
{
	t_list	*tmpsrc;
	t_list	*tmpdst;
	t_list	*tmp;

	if (ft_lstsize(*lstsrc) < 1)
		return (1);
	tmp = (*lstsrc);
	(*lstsrc) = (*lstsrc)->next;
	tmp->next = (*lstdst);
	(*lstdst) = tmp;
	return (0);
}
