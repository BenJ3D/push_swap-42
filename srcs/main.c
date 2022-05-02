/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/02 18:09:40 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int stack_a_b(t_data data)
{
	return (0);
}
int testlst(t_list *list) //FIXME:
{
	t_list	*new;
	t_list	**tmp;
	
	list = NULL;
	new = ft_lstnew(1);
	ft_lstadd_back(&list, new);
	new = ft_lstnew(2);
	ft_lstprint(new);
	ft_lstadd_back(&list, new);
	new = ft_lstnew(3);
	ft_lstadd_back(&list, new);
	 //printf lst
	ft_lstprint(list);
	
	tmp = &list;
	//avance dans lst via tmp
	tmp = &list->next->next;
	ft_lstprint(list);
	ft_lstprint(*tmp);
	
	//ajout element a cet endroit
	new = ft_lstnew(42);
	ft_lstadd_front(tmp, new);
	new = ft_lstnew(101);
	ft_lstadd_back(tmp, new);
	ft_lstprint(list);
	ft_lstprint(*tmp);
	
	return (0);
}

int	main(int ac, char **av)
{
	t_data data;
	
	check_arg_is_valid(ac, av);

	testlst(data.stacka);
	
	return (0);
}
