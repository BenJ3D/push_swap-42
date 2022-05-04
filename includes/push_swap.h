/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:51:25 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/04 15:48:21 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"
# include <stdio.h> // FIXME:
# include <stdlib.h> // FIXME:
# include <unistd.h>
# include <stdarg.h>

/****------------ enum ------------****/
enum	e_error
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

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	int				index;
}					t_list;

/****----------- struct -----------****/

typedef struct s_data
{
	t_list			*stacka;
	t_list			*stackb;
	va_list			ap;
	int				test;
	enum e_error	error;
}				t_data;


/******------------------- utils ---------------------******/

int		ft_str_search_char(char *str, char c);


/******-------------- Error management --------------******/

int		check_arg_is_valid(int ac, char **av);


/******-------------- my_lst function --------------******/

void	ft_lstprint(t_list *list);

//chained list
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);

#endif