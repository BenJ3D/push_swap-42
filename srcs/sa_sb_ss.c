/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 14:15:01 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_sa(t_data *data)
{
	if (!(operation_swap(&data->stacka)))
		ft_putstr("sa\n");
}

void	op_sb(t_data *data)
{
	if (!(operation_swap(&data->stackb)))
		ft_putstr("sb\n");
}

int	operation_swap(t_list **lst)
{
	t_list	*tmp;

	if (ft_lstsize(*lst) < 2)
		return (1);
	tmp = (*lst)->next;
	(*lst)->next = (*lst)->next->next;
	tmp->next = *lst;
	*lst = tmp;
	return (0);
}
