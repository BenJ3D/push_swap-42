/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/02 14:28:20 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int stack_a_b(t_data data)
{
	return (0);
}


int	main(int ac, char **av)
{
	t_data data;
	
	check_arg_is_valid(ac, av);

	t_element		*test_lst;
	t_element		*test_tmp;

	test_lst = lst_init(3);
	lst_add(test_lst, 4);
	lst_add(test_lst, 8);
	lst_add(test_lst, 15);
	lst_add(test_lst, 23);
	test_tmp = test_lst;
	// lst_del(test_tmp);
	// lst_del(test_tmp);
	lst_print(test_lst);
	lst_print(test_tmp);

	// test_tmp = test_lst;
	// test_tmp->first = test_tmp->first->next->next;
	// //lst_add(test_tmp, 13);
	// lst_print(test_tmp);
	// lst_print(test_lst);

	return (0);
}
