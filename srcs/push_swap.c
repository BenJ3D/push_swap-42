/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 23:07:08 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/07 22:41:34 by bducrocq         ###   ########.fr       */
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
		// ft_lstadd_back(&tmp, ft_lstnew(ft_atoi(av[i++])));
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
	(*data)->nbr_arg = ac - 1;
	fill_stacka(data, ac, av);
	check_if_the_list_is_sorted(data);
	check_double(data);
	init_stackb(data);
	ft_lstprint_index((*data)->stacka);
	//printf("number elements %i\n", (*data)->nbr_arg); 
	return (0);
}