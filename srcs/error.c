/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:47:13 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 17:13:51 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	write_error_type(t_data *data)
{
	if (data->error != NO_ERROR && data->error != ERROR_ALREADY_SORT)
		ft_putstr_fd("Error\n", 2);
	if (data->error != NO_ERROR)
	{
		ft_lstclear(&(data)->stacka);
		exit(-1);
	}
	return (0);
}

/**
 * @brief return 0 if path extension is == typefile
 * 
 * @param str 
 * @param filetype enter ".type"
 * @return int 
 */
int	check_type_file(char *str, char *filetype)
{
	int	i;
	int	y;

	i = ft_strlen(str) - 1;
	y = ft_strlen(filetype) - 1;
	while (ft_isspace(str[i]) != 0)
		i--;
	while (y >= 0)
	{
		if (filetype[y] != str[i])
			return (1);
		i--;
		y--;
	}
	return (0);
}
