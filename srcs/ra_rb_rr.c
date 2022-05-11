/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/11 17:38:41 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_ra(t_data *data)
{
	if (!(operation_rotate(&data->stacka)))
		ft_putstr("ra\n");
}

void	op_rb(t_data *data)
{
	if (!(operation_rotate(&data->stackb)))
		ft_putstr("rb\n");
}

void	op_rr(t_data *data)
{
	operation_rotate(&data->stacka);
	operation_rotate(&data->stackb);
	ft_putstr("rr\n");
}

int	operation_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;
	
	if (ft_lstsize(*lst) < 2)
		return (1);
	tmp = (*lst);
	tmp2 = (*lst);
	while(tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	*lst = (*lst)->next;
	tmp->next = NULL;
	return (0);
}