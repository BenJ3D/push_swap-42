/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:51:25 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/08 01:38:02 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"
# include <stdio.h> // FIXME:
# include <stdlib.h> // FIXME:
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

/****------------ enum ------------****/
enum e_error
{
	NO_ERROR,
	ERROR_IS_NOT_INT,
	ERROR_INT_MAXUP,
	ERROR_INT_MINDOWN,
	ERROR_DOUBLE,
	ERROR_ALREADY_SORT,
	ERROR_ONE_ARG,
	ERROR
};

/****----------- struct lst -----------****/

enum e_bool
{
	FALSE,
	TRUE
};

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	int				index;
	enum e_bool		bsort;
}					t_list;

/****----------- struct -----------****/

typedef struct s_data
{
	t_list			*stacka;
	t_list			*stackb;
	va_list			ap;
	int				nbr_arg;
	enum e_error	error;
}				t_data;

/******-----------------push_swap-------------------******/

	void	fill_stacka(t_data **data, int ac, char **av);
	int		init_push_swap(t_data **data, int ac, char **av);
	void	define_index_in_order_stack(t_data	**data);

/******------------------- utils ---------------------******/

	int ft_str_search_char(char *str, char c);
	int ft_atoi_long(const char *src, t_data **data);

/******-------------- Error management --------------******/

	int check_double(t_data **data);
	int check_if_the_list_is_sorted(t_data **data);
	int check_arg_is_valid(int ac, char **av);
	int check_is_valid_int(t_data **data, char *str, int i);
	int check_int_max_or_min(t_data **data, long nb);
	int write_error_type(t_data *data);

/******-------------- my_lst function --------------******/

	void ft_lstprint(t_list *list);
	void ft_lstprintv(t_list *list);
	void ft_lstprint_index(t_list *list);
	void ft_lstprint_stack_a_b(t_list *lsta, t_list *lstb, char *nama, char *namb);

	// chained list
	t_list *ft_lstnew(int content);
	void ft_lstadd_front(t_list **alst, t_list *new);
	t_list *ft_lstlast(t_list *lst);
	void ft_lstadd_back(t_list **alst, t_list *new);

#endif