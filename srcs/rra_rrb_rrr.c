/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 14:14:57 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_rra(t_data *data)
{
	if (!(operation_reverse_rotate(&data->stacka)))
		ft_putstr("rra\n");
}

void	op_rrb(t_data *data)
{
	if (!(operation_reverse_rotate(&data->stackb)))
		ft_putstr("rrb\n");
}

void	op_rrr(t_data *data)
{
	operation_reverse_rotate(&data->stacka);
	operation_reverse_rotate(&data->stackb);
	ft_putstr("rrr\n");
}

int	operation_reverse_rotate(t_list **lst)
{
	t_list	*tmp1;
	t_list	*tmplast;

	if (ft_lstsize(*lst) < 2)
		return (1);
	tmp1 = (*lst);
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmplast = tmp1->next;
	tmplast->next = *lst;
	tmp1->next = NULL;
	*lst = tmplast;
	return (0);
}
