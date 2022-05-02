#include "../includes/push_swap.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst1;

	if (*alst == NULL)
		*alst = new;
	else if (alst != NULL && new != NULL)
	{
		lst1 = ft_lstlast(*alst);
		lst1->next = new;
	}
}

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

