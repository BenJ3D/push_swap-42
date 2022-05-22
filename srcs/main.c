/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 12:07:00 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	del_content(int	nb)
{
	nb = 0;
	return (0);
}

int	main(int ac, char **av)
{
	t_data	data;
	
	ft_bzero(&data, sizeof(t_data));
	if (ac >= 2)
		init_push_swap(&data, ac, av);
	ft_lstclear(&(data).stacka);
	return (0);
}
