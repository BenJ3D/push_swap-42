/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_atoi_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:30:59 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/06 16:07:37 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_isspace3(char *str)
{
	int i;

	i = 0;
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' 
		|| str[i] == '\f' || str[i] == '\r')
		return (1);
	return (0);
}

int	check_is_valid_int(t_data **data, char *str, int i)
{
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			(*data)->error = ERROR_IS_NOT_INT;
			break ;
		}
		i++;
	}
	write_error_type(*data);
	return (0);
}


int	check_if_int_max_or_min(t_data **data, long nb)
{
	if (nb > INT_MAX)
		(*data)->error = ERROR_INT_MAXUP; //TODO lkjdslk
	else if (nb < INT_MIN) //TODO: faire la mise en forme
		(*data)->error = ERROR_INT_MINDOWN;
	if ((*data)->error != NO_ERROR)
		write_error_type(*data);
	return (0);
}

long ft_atoi_long(const char *src, t_data **data)
{
	int i;
	long nb;
	long sign;
	char *str;

	str = (char *)src;
	nb = 0;
	sign = 1;
	i = 0;
	while (ft_isspace3(&str[i]) != 0)
		i++;
	if (str[i] == '-' && str[i + 1] != '+')
	{
		sign *= -1;
		i++;
	}
	while (str[i] == '+')
		i++;
	check_is_valid_int(data, str, i);
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';
	check_if_int_max_or_min(data, (nb * sign));
	return (nb * sign);
}
