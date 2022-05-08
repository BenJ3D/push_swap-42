/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:39 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 16:08:44 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int check_double(t_data *data)
{
	t_list *tmplst;
	t_list *tmpcmp;

	tmplst = (data)->stacka;
	tmpcmp = (data)->stacka->next;
	while (tmplst->next != NULL) // TODO comparer les doubles
	{
		while (tmpcmp != NULL)
		{
			if (tmplst->content == tmpcmp->content)
			{
				(data)->error = ERROR_DOUBLE;
				write_error_type(data);
			}
			tmpcmp = tmpcmp->next;
		}
		tmplst = tmplst->next;
		if (tmplst != NULL)
			tmpcmp = &*tmplst->next;
	}
	return (0);
}

int	check_if_the_list_is_sorted(t_data *data) //TODO
{
	int	i;
	int	y;
	t_list	*tmp;
	int dbarg = (data)->nbr_arg;

	tmp = (data)->stacka;
	i = 1;
	y = 1;
	while ((data)->nbr_arg > i)
	{
		if ((tmp->content < (tmp)->next->content))
			y++;
		i++;
		tmp = tmp->next;
	}
	if (i == y)
		(data)->error = ERROR_ALREADY_SORT;
	write_error_type(data);
	return (0);
}

int	check_is_valid_int(t_data *data, char *str, int i)
{
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			(data)->error = ERROR_IS_NOT_INT;
			break;
		}
		i++;
	}
	write_error_type(data);
	return (0);
}

int check_int_max_or_min(t_data *data, long nb)
{
	if (nb > INT_MAX)
		(data)->error = ERROR_INT_MAXUP;
	else if (nb < INT_MIN)
		(data)->error = ERROR_INT_MINDOWN;
	if ((data)->error != NO_ERROR)
		write_error_type(data);
	return (0);
}	
