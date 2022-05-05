/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/05 23:06:47 by bducrocq         ###   ########.fr       */
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
    t_list **tmp;

    list = NULL;
    ft_lstadd_back(list, ft_lstnew(1));
    ft_lstadd_back(list, ft_lstnew(2));
    ft_lstadd_back(list, ft_lstnew(3));
    // printf lst
    // ft_lstprint(list);

    tmp = list;
    // avance dans lst via tmp
    // tmp =   list;
    ft_lstprint(*list);
    ft_lstprint(*tmp);

    // ajout element a cet endroit
    ft_lstadd_front(tmp, ft_lstnew(42));
    ft_lstadd_back(tmp, ft_lstnew(101));
    ft_lstprint(*list);
    ft_lstprint(*tmp);
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
