/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 22:31:17 by vbrazhni          #+#    #+#             */
/*   Updated: 2022/05/17 00:27:04 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void free_command_list(t_list *list)
{
	t_list *current;
	t_list *delete;

	current = list->head;
	while (current)
	{
		delete = current;
		current = current->next;
		free(delete->name);
		free(delete);
	}
	free(list);
}

void free_stack(t_list *stack) //TODO modif ft
{
	size_t i;
	t_list *current;
	t_list *delete;

	i = 0;
	current = stack->head;
	while (i < stack->size)
	{
		delete = current;
		current = current->next;
		free(delete);
		i++;
	}
	free(stack);
}
