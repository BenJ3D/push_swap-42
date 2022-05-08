/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:07:08 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 19:09:12 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min_in_lst(t_list *list)
{
	int	min;
	
	min = list->content;
	while(list)
	{
		if (list->content < min)
			min = list->content;
		list = list->next;
	}
	return (min);
}

void	define_index_in_order_stack(t_data *data) //TODO: NORM!!
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
		while(tmplst != NULL) // chope le nb min pas encore traiter
		{
			if ((tmplst->content < nb_min) && tmplst->bsort == FALSE)
				nb_min = tmplst->content;
			tmplst = tmplst->next;
		}
		tmplst = headlst;
		while (tmplst) // cherche le nb min dans lst et fou son index
		{
			if (tmplst->content == nb_min)
			{
				tmplst->index = i;
				tmplst->bsort = TRUE;
				break ;
			}
			tmplst = tmplst->next;
		}
		tmplst = headlst;
		while(tmplst->bsort != FALSE && tmplst->next != NULL)
			tmplst = tmplst->next;
		nb_min = tmplst->content;
		tmplst = headlst;
		i++;
	}
	// ft_lstprint_stack_a_b(tmplst, headlst, "tmplst", "headlst"); // TODO
}

void init_stackb(t_data *data)
{
	(data)->stackb = NULL;
}

/**
 * @brief fill stack a with argv(atoi)
 * 
 * @param data main struct data
 * @param ac argc
 * @param av argv
 */
void	fill_stacka(t_data *data, int ac, char **av)
{
	int i;
	t_list *tmp;

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
	check_if_the_list_is_sorted(data);
	check_double(data);
	define_index_in_order_stack(data);
	operation_swap(&data->stacka);
	init_stackb(data);
	//ft_lstprint_stack_a_b((data)->stacka, (data)->stacka, "stack a", "stack a");
	return (0);
}

// coucou 