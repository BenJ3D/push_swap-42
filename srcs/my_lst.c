/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 13:17:48 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/02 14:28:33 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lst	*lst_init(int start_nbr)
{
	t_lst		*list;
	t_element	*element;

	list = malloc(sizeof(*list));
	element = malloc(sizeof(*element));

	if (list == NULL || element == NULL)
		exit(EXIT_FAILURE);
	element->nbr = start_nbr;
	element->next = NULL;
	list->first = element;

	return (list);
}

void	lst_add(t_element *list, int new_nbr)
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

void	lst_print(t_element *liste)
{
	t_element *tmp;

	tmp = liste;
	if (liste == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		ft_putnbr(tmp->nbr);
		ft_putstr(" -> ");
		tmp = tmp->next;
	}
	ft_putstr("NULL \n");
}

void	lst_add_at_address(t_lst *list, int fnbr, int newnbr)
{
	t_element	*tmp;
	t_lst		*tlst;

	tlst = list;
	
	while((tlst->first->nbr != fnbr) || tlst)
	{
		tlst->first = tlst->first->next;
	}
	if (tlst->first->nbr == fnbr)
	
	lst_add(list, newnbr);

}