/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:07:08 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 14:13:50 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * @brief return min number find in list->content
 * 
 * @param list 
 * @return int 
 */
int	find_min_in_lst(t_list *list)
{
	int	min;

	min = list->content;
	while (list)
	{
		if (list->content < min)
			min = list->content;
		list = list->next;
	}
	return (min);
}

void	define_index_norm(t_list *tmplst, t_list *headlst, int i, int *nb_min)
{
	while (tmplst != NULL)
	{
		if ((tmplst->content < *nb_min) && tmplst->bsort == FALSE)
			*nb_min = tmplst->content;
		tmplst = tmplst->next;
	}
	tmplst = headlst;
	while (tmplst)
	{
		if (tmplst->content == *nb_min)
		{
			tmplst->index = i;
			tmplst->bsort = TRUE;
			break ;
		}
		tmplst = tmplst->next;
	}
}

/**
 * @brief defines the order of the elements with an unsigned int index
 *
 * @param data
 */
void	define_index_in_order_stack(t_data *data)
{
	int		i;
	int		nb_min;
	t_list	*tmplst;
	t_list	*headlst;

	tmplst = (data)->stacka;
	headlst = tmplst;
	nb_min = tmplst->content;
	i = 0;
	while (i < (data)->nbr_arg)
	{
		define_index_norm(tmplst, headlst, i, &nb_min);
		tmplst = headlst;
		while (tmplst->bsort != FALSE && tmplst->next != NULL)
			tmplst = tmplst->next;
		nb_min = tmplst->content;
		tmplst = headlst;
		i++;
	}
}

/**
 * @brief fill stacka with argv(atoi)
 * 
 * @param data main struct data
 * @param ac argc
 * @param av argv
 */
void	fill_stacka(t_data *data, int ac, char **av)
{
	int		i;
	t_list	*tmp;

	i = 1;
	tmp = NULL;
	while (i < ac)
		ft_lstadd_back(&tmp, ft_lstnew(ft_atoi_long(av[i++], data)));
	(data)->stacka = tmp;
}

/**
 * @brief function for start initialization
 *
 * @param data
 * @param ac
 * @param av
 * @return int
 */
int	init_push_swap(t_data *data, int ac, char **av)
{
	(data)->error = NO_ERROR;
	data->nbr_arg = ac - 1;
	fill_stacka(data, ac, av);
	data->stackb = NULL;
	if (check_if_the_list_is_sort(data))
		write_error_type(data);
	check_double(data);
	define_index_in_order_stack(data);
	if (data->nbr_arg == 2)
		op_sa(data);
	else if (data->nbr_arg == 3)
		sort_three_arg(data);
	else if (data->nbr_arg == 4 || data->nbr_arg == 5)
		sort_five_arg(data);
	else
		radix_sort(data);
	return (0);
}
