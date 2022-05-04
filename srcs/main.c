/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/04 15:17:41 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int stack_a_b(t_data data)
{
	return (0);
}
int testlst(t_list *list) //FIXME:
{
	t_list	**tmp;
	
	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(1));
	ft_lstadd_back(&list, ft_lstnew(2));
	ft_lstadd_back(&list, ft_lstnew(3));
	 //printf lst
	ft_lstprint(list);

	tmp = &list;
	//avance dans lst via tmp
	tmp = &list->next->next;
	ft_lstprint(list);
	ft_lstprint(*tmp);
	
	//ajout element a cet endroit
	ft_lstadd_front(tmp, ft_lstnew(42));
	ft_lstadd_back(tmp, ft_lstnew(101));
	ft_lstprint(list);
	ft_lstprint(*tmp);
	
	return (0);
}

int	main(int ac, char **av)
{
	t_data data;
	t_list	*tmp;
	
	check_arg_is_valid(ac, av);

	testlst(data.stacka);
	// while(data.stacka) //TODO: essayer de free toute la chaine
	// {
	// 	tmp = data.stacka;
	// 	data.stacka->next = tmp;
	// 	free(tmp);
	// }
	return (0);
}
