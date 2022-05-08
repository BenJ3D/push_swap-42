/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 19:22:37 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	operation_swap(t_list **lst)
{
	t_list	*tmp;
	
	tmp = (*lst)->next;
	(*lst)->next = (*lst)->next->next;
	tmp->next = *lst;
	*lst = tmp;
	
	ft_lstprint_stack_a_b((*lst), tmp, "stack a", "   tmp  ");

}

	// ft_lstprint_stack_a_b((*data)->stacka, (*data)->stacka, "stacka", "stacka"); // TODO
	// head = (*data)->stacka;
	// tmp2 = (*data)->stacka->next;
	// tmp3 = (*data)->stacka->next->next;
	// ft_lstprint_stack_a_b((*data)->stacka, tmp3, "stacka", "tmp3"); // TODO
	// (*data)->stacka->next = (*data)->stacka;
	// (*data)->stacka = tmp3;