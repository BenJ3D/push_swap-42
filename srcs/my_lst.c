/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:17:48 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/01 13:52:04 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lst *lst_init(void)
{
	t_lst		*list;
	t_element	*element;

	list = malloc(sizeof(*list));
	element = malloc(sizeof(*element));

	if (list == NULL || element == NULL)
	{
		exit(EXIT_FAILURE);
	}

	element->nbr = 0;
	element->next = NULL;
	list->first = element;

	return (list);
}

void insertion(t_lst *liste, int new_nbr)
{
	t_element *new;

	new = malloc(sizeof(*new));
	if (liste == NULL || new == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new->nbr = new_nbr;
	new->next = liste->first;
	liste->first = new;
}