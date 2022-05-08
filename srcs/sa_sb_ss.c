/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 21:15:08 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void op_sa(t_data *data)
{
	operation_swap(&data->stacka);
	ft_putstr("sa\n");
}

void op_sb(t_data *data)
{
	operation_swap(&data->stackb);
	ft_putstr("sb\n");
}

void op_ss(t_data *data)
{
	operation_swap(&data->stacka);
	operation_swap(&data->stackb);
	ft_putstr("ss\n");
}

void	operation_swap(t_list **lst) //TODO: gestion si un seul element
{
	t_list	*tmp;
	
	if (ft_lstsize(*lst) < 2)
		return ;
	tmp = (*lst)->next;
	(*lst)->next = (*lst)->next->next;
	tmp->next = *lst;
	*lst = tmp;
}
