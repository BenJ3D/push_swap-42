/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:51:25 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/22 17:13:29 by bducrocq         ###   ########.fr       */
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
	FALSE = 0,
	TRUE = 1
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

/******----------------- push_swap -------------------******/

void	fill_stacka(t_data *data, int ac, char **av);
int		init_push_swap(t_data *data, int ac, char **av);
void	define_index_in_order_stack(t_data	*data);
void	radix_sort(t_data *data);

/******----------------- operations -------------------******/

void	op_sa(t_data *data);
void	op_sb(t_data *data);
void	op_ss(t_data *data);
void	op_ra(t_data *data);
void	op_rb(t_data *data);
void	op_rr(t_data *data);

void	op_rra(t_data *data);
void	op_rrb(t_data *data);
void	op_rrr(t_data *data);

void	op_pa(t_data *data);
void	op_pb(t_data *data);

int		operation_swap(t_list **lst);
int		operation_rotate(t_list **lst);
int		operation_reverse_rotate(t_list **lst);
int		operation_push(t_list **lstdst, t_list **lstsrc);

/******-------------- Alog function --------------******/

int		sort_three_arg(t_data *data);
int		sort_five_arg(t_data *data);

/******------------------- utils ---------------------******/

int		ft_atoi_long(const char *src, t_data *data);
int		search_pos_index(t_list *lst, int index);

/******-------------- my_lst function --------------******/

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);

/******-------------- Error management --------------******/

int		check_stacka_is_sort(t_data *data);
int		check_double(t_data *data);
int		check_if_the_list_is_sort(t_data *data);
int		check_is_valid_int(t_data *data, char *str, int i);
int		check_int_max_or_min(t_data *data, long nb);
int		write_error_type(t_data *data);

/******-------------- debug function --------------******/

// void	ft_lstprint(t_list *list);
// void	ft_lstprintv(t_list *list);
// void	ft_lstprint_index(t_list *list);
// void	ft_lstprint_stack_a_b(t_list *lsta, t_list *lstb, char *na, char *nb);

#endif