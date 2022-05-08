/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 21:46:23 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void op_ra(t_data *data)
{
	operation_rotate(&data->stacka);
	ft_putstr("ra\n");
}

void op_rb(t_data *data)
{
	operation_rotate(&data->stackb);
	ft_putstr("rb\n");
}

void op_rr(t_data *data)
{
	operation_rotate(&data->stacka);
	operation_rotate(&data->stackb);
	ft_putstr("rr\n");
}

void	operation_rotate(t_list **lst)
{
	t_list	*tmp;
	
	if (ft_lstsize(*lst) < 2)
		return ;
	tmp = ft_lstlast(*lst);
	(*lst)->next = (*lst)->next->next;
	tmp->next = *lst;
	*lst = tmp;
	
	ft_lstprint_stack_a_b((*lst), tmp, "stack a", "   tmp  ");
