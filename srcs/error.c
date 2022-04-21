/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:47:13 by bducrocq          #+#    #+#             */
/*   Updated: 2022/04/21 02:46:02 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	write_error_type2(t_data *data)
{
	return (0);
}

int	write_error_type(t_data *data)
{
	if (data->error == ERROR)
		ft_putstr("Error\n");
	else if (data->error == ERROR_DOUBLE)
		ft_putstr("Error\nduplicate detected\n");
	else if (data->error == ERROR_INT_MAXUP)
		ft_putstr("Error\nnumber greater than int max detected\n");
	else if (data->error == ERROR_INT_MINDOWN)
		ft_putstr("Error\nnumber less than int min detected\n");
	else if (data->error == ERROR_IS_NOT_INT)
		ft_putstr("Error\nis not int\n");
	else
		//write_error_type2(data);
	if (data->error != NO_ERROR)
		exit (0);
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

int	check_norm_arg_is_ok(int ac, char *str, t_data *data)
{
	if (data->error != NO_ERROR)
		return (1);
	return (0);
}
