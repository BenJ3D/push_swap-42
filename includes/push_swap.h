/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:51:25 by bducrocq          #+#    #+#             */
/*   Updated: 2022/05/04 15:13:18 by bducrocq         ###   ########.fr       */
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
	struct s_list	*prev;
}					t_list;

// typedef struct s_element t_element;

// struct s_element
// {
// 	int				nbr;
// 	t_element		*prev;
// 	t_element		*next;
// };

// typedef struct s_lst
// {
// 	t_element		*first;
	
// }		t_lst;


/****----------- struct -----------****/

typedef struct s_data
{
	t_list			*stacka;
	t_list			*stackb;
	va_list			ap;
	enum e_error	error;
}				t_data;


/******------------------- utils ---------------------******/

int		ft_str_search_char(char *str, char c);


/******-------------- Error management --------------******/

int		check_arg_is_valid(int ac, char **av);


/******-------------- my_lst function --------------******/

// t_lst	*lst_init(int);
// void	lst_add(t_lst *liste, int new_nbr);
// void	lst_del(t_lst *list);
void	ft_lstprint(t_list *list);
// void	lst_add_at_address(t_lst *list, int fnbr, int newnbr);

//chained list
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **alst, t_list *new);
// int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
//void	ft_lstdelone(t_list *lst, void (*del)(void *));
//void	ft_lstclear(t_list **lst, void (*del)(void *));
// void	ft_lstiter(t_list *lst, void (*f)(void *));
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// char	*ft_strtrim(char const *s1, char const *set);

#endif