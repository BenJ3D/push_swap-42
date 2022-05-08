/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 03:37:42 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	operation_sa(t_data **data)
{
	t_list	*head;
	t_list	*tmp2;
	t_list	*tmp3;
	t_list	*ptr;

	head = (*data)->stacka;
	tmp2 = (*data)->stacka->next;
	tmp3 = (*data)->stacka->next->next;
	ft_lstprint_stack_a_b((*data)->stacka, tmp3, "stacka", "tmp3"); // TODO
	(*data)->stacka->next = (*data)->stacka;
	(*data)->stacka = tmp3;
	ft_lstprint_stack_a_b((*data)->stacka, tmp3, "stacka", "tmp3"); // TODO
	
}