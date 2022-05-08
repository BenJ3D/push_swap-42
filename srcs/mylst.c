/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylst.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 01:36:22 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 19:33:25 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst1;

	if (*alst == NULL)
		*alst = new;
	else if (alst != NULL && new != NULL)
	{
		lst1 = ft_lstlast(*alst);
		lst1->next = new;
	}
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->index = 0;
	tmp->bsort = FALSE;
	tmp->next = NULL;
	return (tmp);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

void ft_lstprint(t_list *list)
{
	t_list *tmp;

	tmp = list;
	if (list == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		ft_putnbr(tmp->content);
		ft_putstr(" -> ");
		tmp = tmp->next;
	}
	ft_putstr("NULL \n");
}

void ft_lstprintv(t_list *list)
{
	t_list *tmp;

	tmp = list;
	if (list == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		ft_putnbr(tmp->content);
		ft_putstr("\n");
		tmp = tmp->next;
	}
	ft_putstr("__");
}

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void ft_lstprint_index(t_list *list)
{
	t_list *tmp;

	tmp = list;
	if (list == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		ft_putstr("  ");
		ft_putnbr(tmp->content);
		ft_putstr("	");
		ft_putnbr(tmp->index);
		ft_putstr("\n");
		tmp = tmp->next;
	}
	ft_putstr(" __________\n  stack a  ");
}

void ft_lstprint_stack_a_b(t_list *lsta, t_list *lstb, char *nama, char *namb)
{
	t_list *tmpa;
	t_list *tmpb;

	if (lsta == NULL || lstb == NULL)
		exit(EXIT_FAILURE);
	tmpa = lsta;
	tmpb = lstb;
	while (tmpa != NULL || tmpb != NULL)
	{
		ft_putstr("  ");
		ft_putnbr(tmpa->content);
		ft_putstr("	");
		ft_putnbr(tmpa->index);
		ft_putstr("		");
		ft_putstr("  ");
		ft_putnbr(tmpb->content);
		ft_putstr("	");
		ft_putnbr(tmpb->index);
		ft_putstr("\n");
		if (tmpa->next == NULL || tmpb->next == NULL)
			break ;
		tmpa = tmpa->next;
		tmpb = tmpb->next;
	}
	printf(" __________		__________ \n");
	printf("  %s  		 %s   \n\n", nama, namb);
}

void ft_lstprint_stack_a_b_double(t_list *lsta, t_list *lstb, char *nama, char *namb)
{
	t_list *tmpa;
	t_list *tmpb;

	if (lsta == NULL || lstb == NULL)
		exit(EXIT_FAILURE);
	tmpa = lsta;
	tmpb = lstb;
	while (tmpa != NULL || tmpb != NULL)
	{
		ft_putstr("  ");
		ft_putnbr(tmpa->content);
		ft_putstr("	");
		ft_putnbr(tmpa->index);
		ft_putstr("		");
		ft_putstr("  ");
		ft_putnbr(tmpb->content);
		ft_putstr("	");
		ft_putnbr(tmpb->index);
		ft_putstr("\n");
		if (tmpa->next == NULL || tmpb->next == NULL)
			break ;
		tmpa = tmpa->next;
		tmpb = tmpb->next;
	}
	printf(" __________		__________ \n");
	printf("  %s  		 %s   \n\n", nama, namb);
}