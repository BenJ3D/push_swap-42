/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 13:05:38 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 16:47:58 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void ft_lstprint(t_list *list)
// {
// 	t_list *tmp;

// 	tmp = list;
// 	if (list == NULL)
// 		exit(EXIT_FAILURE);
// 	while (tmp != NULL)
// 	{
// 		ft_putnbr(tmp->content);
// 		ft_putstr(" -> ");
// 		tmp = tmp->next;
// 	}
// 	ft_putstr("NULL \n");
// }

// void ft_lstprintv(t_list *list)
// {
// 	t_list *tmp;

// 	tmp = list;
// 	if (list == NULL)
// 		exit(EXIT_FAILURE);
// 	while (tmp != NULL)
// 	{
// 		ft_putnbr(tmp->content);
// 		ft_putstr("\n");
// 		tmp = tmp->next;
// 	}
// 	ft_putstr("__");
// }

// void ft_lstprint_index(t_list *list)
// {
// 	t_list *tmp;

// 	tmp = list;
// 	if (list == NULL)
// 		exit(EXIT_FAILURE);
// 	while (tmp != NULL)
// 	{
// 		ft_putstr("  ");
// 		ft_putnbr(tmp->content);
// 		ft_putstr("	");
// 		ft_putnbr(tmp->index);
// 		ft_putstr("\n");
// 		tmp = tmp->next;
// 	}
// 	ft_putstr(" __________\n  stack a  ");
// }

//void ft_lstprint_stack_a_b(t_list *lsta, t_list *lstb, char *nama, char *namb)
// {
// 	t_list *tmpa;
// 	t_list *tmpb;
// 	int lena;
// 	int lenb;
// 	int i;

// 	lena = ft_lstsize(lsta);
// 	lenb = ft_lstsize(lstb);
// 	tmpa = NULL;
// 	tmpb = NULL;
// 	if (lsta == NULL && lstb == NULL)
// 		exit(EXIT_FAILURE);
// 	if (lena > 0)
// 		tmpa = lsta;
// 	if (lenb > 0)
// 		tmpb = lstb;
// 	if (lena > lenb)
// 		i = lena;
// 	else
// 		i = lenb;
// 	while (i > 0)
// 	{
// 		ft_putstr("  ");
// 		if (tmpa != NULL)
// 			ft_putnbr(tmpa->content);
// 		else
// 			ft_putchar('.');

// 		ft_putstr("	");

// 		if (tmpa != NULL)
// 			ft_putnbr(tmpa->index);
// 		else
// 			ft_putchar('.');

// 		ft_putstr("		");
// 		ft_putstr("  ");

// 		if (tmpb != NULL)
// 			ft_putnbr(tmpb->content);
// 		else
// 			ft_putchar('.');

// 		ft_putstr("	");

// 		if (tmpb != NULL)
// 			ft_putnbr(tmpb->index);
// 		else
// 			ft_putchar('.');

// 		ft_putstr("\n");
// 		if (tmpa == NULL && tmpb == NULL)
// 			break;
// 		if (tmpa)
// 			tmpa = tmpa->next;
// 		if (tmpb)
// 			tmpb = tmpb->next;
// 		i--;
// 	}
// 	printf(" __________		__________ \n");
// 	printf("  %s  		 %s   \n\n", nama, namb);
// }

// void ft_lstprint_stack_a_b_double(t_list *lsta,t_list *lstb,char *a,char *b)
// {
// 	t_list *tmpa;
// 	t_list *tmpb;

// 	if (lsta == NULL || lstb == NULL)
// 		exit(EXIT_FAILURE);
// 	tmpa = lsta;
// 	tmpb = lstb;
// 	while (tmpa != NULL || tmpb != NULL)
// 	{
// 		ft_putstr("  ");
// 		ft_putnbr(tmpa->content);
// 		ft_putstr("	");
// 		ft_putnbr(tmpa->index);
// 		ft_putstr("		");
// 		ft_putstr("  ");
// 		ft_putnbr(tmpb->content);
// 		ft_putstr("	");
// 		ft_putnbr(tmpb->index);
// 		ft_putstr("\n");
// 		if (tmpa->next == NULL || tmpb->next == NULL)
// 			break;
// 		tmpa = tmpa->next;
// 		tmpb = tmpb->next;
// 	}
// 	printf(" __________		__________ \n");
// 	printf("  %s  		 %s   \n\n", nama, namb);
// }
