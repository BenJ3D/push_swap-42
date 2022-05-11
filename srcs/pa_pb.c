/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/11 16:58:53 by bducrocq         ###   ########.fr       */
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

void	operation_push(t_list **lstdst, t_list **lstsrc)
{
	t_list	*tmpsrc;
	t_list	*tmpdst;
	t_list	*tmp;
	int lensrc;
	int lendst;
	int i;

	lensrc = ft_lstsize(*lstsrc);
	lendst = ft_lstsize(*lstdst);
	if (lensrc < 1)
		return ;
	
	tmp = (*lstsrc);
	(*lstsrc) = (*lstsrc)->next;
	tmp->next = (*lstdst);
	(*lstdst) = tmp;
}
