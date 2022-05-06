/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/06 21:58:46 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/**
 * @brief fonction test list
 *
 * @param list
 * @return int
 */
int testlst(t_list **list) // FIXME:
{
	t_list *tmp;

	*list = NULL;
	ft_lstadd_back(list, ft_lstnew(1));
	 ft_lstadd_back(list, ft_lstnew(2));
	 ft_lstadd_back(list, ft_lstnew(3));
	ft_lstadd_back(list, ft_lstnew(4));
	 ft_lstadd_back(list, ft_lstnew(5));
	 ft_lstadd_back(list, ft_lstnew(6));
	// printf lst
	// ft_lstprint(list);

	// avance dans lst via tmp
	// tmp =   list;
	tmp = *list;
	ft_lstprint(*list);
	ft_lstprint(tmp);

	tmp = (tmp)->next->next->next;
	ft_lstprint(*list);
	ft_lstprint(tmp);

	// ajout element a cet endroit
	// ft_lstadd_front(tmp, ft_lstnew(42));
	// ft_lstadd_back(tmp, ft_lstnew(101));
	exit (0);
	return (0);
}

t_list *fill_stacka3(int ac, char **av)
{
    int i;
    t_list *tmp;

    i = 1;
    tmp = NULL;
    while (i < ac)
        ft_lstadd_back(&tmp, ft_lstnew(ft_atoi(av[i++])));
    return (tmp);
}

void fill_stacka2(t_data *data, int ac, char **av)
{
    int i;
    t_list *tmp;

    i = 1;
    tmp = NULL;
    while (i < ac)
        ft_lstadd_back(&tmp, ft_lstnew(ft_atoi(av[i++])));
    data->stacka = tmp;
}

int main(int ac, char **av)
{
	t_data data;

	t_list *test;
	testlst(&test);
	// if (ac >= 2)
	// {
	// 	// int i;

	// 	// i = 1;
	// 	// data.stacka = NULL;
	// 	// while (i < ac)
	// 	// {
	// 	// 	ft_lstadd_back(&data.stacka, ft_lstnew(ft_atoi(av[i])));
	// 	// 	i++;
	// 	// }
	// 	// ft_lstprint(data.stacka);

	// 	// test = fill_stacka(ac, av);
	// 	data.stacka = NULL;
	// 	data.stacka = fill_stacka(ac, av);
	// 	ft_lstprint(test);
	// 	// ft_lstprint(data->stacka);
	// }
	// check_arg_is_valid(ac, av[1]);
	ft_putchar('\n');
	return (0);
}