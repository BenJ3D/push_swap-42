/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/04/15 02:54:15 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	check_arg_is_valid(int ac, char **av)
// {
// 	int	i;
// 	int	y;
// 	int	*stacka;
	
// 	stacka = (int *)malloc(sizeof(int) * ac - 1);
// 	i = 1;
// 	y = 0;
// 	while (i < ac)
// 	{
// 		// printf("arg : %d --> %s\n", y, av[i]);
// 		stacka[y] = ft_atoi(av[i]);
// 		printf("stack : %d --> %d\n", y, stacka[y]);
// 		i++;
// 		y++;
// 	}
// 	// printf("stack : %d --> %d\n", y, stacka[y]);
// 	printf("debug stacka %d\n", stacka[6]);
// 	return (0);
// }

int	check_arg_is_valid(int ac, char **av)
{
	int	i;
	int	y;
	int	*stacka;
	
	stacka = (int *)malloc(sizeof(int) * ac - 1);
	i = 1;
	y = 0;
	while (i < ac)
	{
		// printf("arg : %d --> %s\n", y, av[i]);
		stacka[y] = ft_atoi(av[i]);
		printf("stack : %d --> %d\n", y, stacka[y]);
		i++;
		y++;
	}
	// printf("stack : %d --> %d\n", y, stacka[y]);
	printf("debug stacka %d\n", stacka[6]);
	return (0);
}
