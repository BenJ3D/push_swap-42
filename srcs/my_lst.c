/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:17:48 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/01 18:44:26 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lst	*lst_init(void)
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

void	lst_add(t_lst *list, int new_nbr)
{
	t_element *new;

	new = malloc(sizeof(*new));
	if (list == NULL || new == NULL)
		exit(EXIT_FAILURE);
	new->nbr = new_nbr;
	new->next = list->first;
	list->first = new;
}

void	lst_del(t_lst *list)
{
	t_element *be_deleted;
	
	if (list == NULL)
		exit(EXIT_FAILURE);
	if (list->first != NULL)
	{
		be_deleted = list->first;
		list->first = list->first->next;
		free(be_deleted);
	}
}

void	lst_print(t_lst *liste)
{
	t_element *current;

	if (liste == NULL)
		exit(EXIT_FAILURE);
	current = liste->first;
	while (current != NULL)
	{
		ft_putnbr(current->nbr);
		ft_putstr(" -> ");
		current = current->next;
	}
	ft_putstr("NULL \n");
}

void	lst_add_address(t_lst *list, int fnbr, int newnbr)
{
	t_lst	*tmp;
	tmp = list;
	lst_add(list, newnbr);

}