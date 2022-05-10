/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/10 17:42:54 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_pa(t_data *data)
{
	operation_push(&data->stacka, &data->stackb);
	ft_putstr("pa\n");
}

void	op_pb(t_data *data)
{
	operation_push(&data->stackb, &data->stacka);
	ft_putstr("pb\n");
}

void	operation_push(t_list **lstdst, t_list **lstsrc) //TODO: gestion si un seul element
{
	t_list	*tmp;
	
	if (ft_lstsize(*lstsrc) < 1)
		return ;
	tmp = (*lstsrc)->next;
	(*lstsrc)->next = (*lstsrc)->next->next;
	tmp->next = *lstsrc;
	*lstsrc = tmp;
}
