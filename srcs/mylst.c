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

t_list	*ft_lstnew(int content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->index = 0;
	tmp->next = NULL;
	return (tmp);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}

void ft_lstprint(t_list *list)
{
	t_list *tmp;

	tmp = list;
	if (list == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		ft_putnbr(tmp->content);
		ft_putstr(" -> ");
		tmp = tmp->next;
	}
	ft_putstr("NULL \n");
}

void ft_lstprintv(t_list *list)
{
	t_list *tmp;

	tmp = list;
	if (list == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		ft_putnbr(tmp->content);
		ft_putstr("\n");
		tmp = tmp->next;
	}
	ft_putstr("__");
}

void ft_lstprint_index(t_list *list)
{
	t_list *tmp;

	tmp = list;
	if (list == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		ft_putstr("  ");
		ft_putnbr(tmp->content);
		ft_putstr("	");
		ft_putnbr(tmp->index);
		ft_putstr("\n");
		tmp = tmp->next;
	}
	ft_putstr(" __________\n  stack a  ");
}

void ft_lstprint_stack_a_b(t_list *lsta, t_list *lstb)
{
	t_list *tmpa;
	t_list *tmpb;

	if (lsta == NULL || lstb == NULL)
		exit(EXIT_FAILURE);
	tmpa = lsta;
	tmpb = lstb;
	while (tmpa != NULL || tmpb != NULL)
	{
		ft_putstr("  ");
		ft_putnbr(tmpa->content);
		ft_putstr("	");
		ft_putnbr(tmpa->index);
		ft_putstr("		");
		ft_putstr("  ");
		ft_putnbr(tmpb->content);
		ft_putstr("	");
		ft_putnbr(tmpb->index);
		ft_putstr("\n");
		tmpa = tmpa->next;
		tmpb = tmpb->next;
	}
	ft_putstr(" __________		__________ \n");
	ft_putstr("  stack a  		 stack b   \n");
}