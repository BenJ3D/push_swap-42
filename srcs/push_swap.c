/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:07:08 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/06 00:33:39 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void init_stackb(t_data **data)
{
	(*data)->stackb = NULL;
}

/**
 * @brief fill stack a with argv(atoi)
 * 
 * @param data main struct data
 * @param ac argc
 * @param av argv
 */
void fill_stacka(t_data **data, int ac, char **av)
{
	int i;
	t_list *tmp;

	i = 1;
	tmp = NULL;
	while (i < ac)
		ft_lstadd_back(&tmp, ft_lstnew(ft_atoi_long(av[i++], data)));
	(*data)->stacka = tmp;
}

/**
 * @brief function for start initialization
 *
 * @param data
 * @param ac
 * @param av
 * @return int
 */
int	init_push_swap(t_data **data, int ac, char **av)
{
	(*data)->error = NO_ERROR;
	fill_stacka(data, ac, av);
	init_stackb(data);
	ft_lstprint_index((*data)->stacka);
	return (0);
}