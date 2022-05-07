int check_double(t_data **data)
{
	int i;
	int y;
	int *tab;
	t_list *tmplst;
	t_list *tmpcmp;

	i = 0;
	y = 1;
	tmplst = (*data)->stacka;
	tmpcmp = (*data)->stacka->next;
	// ft_lstprint(tmplst);
	// ft_lstprint(tmpcmp);
	// tab = (int *)malloc(sizeof(int) * ((*data)->nbr_arg));
	while (tmplst->next != NULL) // TODO comparer les doubles
	{
		while (tmpcmp->next != NULL)
		{
			if (tmplst->content == tmpcmp->content)
			{
				(*data)->error = ERROR_DOUBLE;
				write_error_type(*data);
			}
			tmpcmp = tmpcmp->next;
		}
		tmplst = tmplst->next;
		tmpcmp = tmplst->next;
	}

	// free (tab);
	return (0);
}

int write_error_type(t_data *data)
{
	// if (data->error != NO_ERROR && data->error != ERROR_ALREADY_SORT)
	// 	ft_putstr("Error\n");
	if (data->error == ERROR && data->error != ERROR_ALREADY_SORT)
		ft_putstr("Error\n");
	else if (data->error == ERROR_DOUBLE)
		ft_putstr("Error\nduplicate detected\n");
	else if (data->error == ERROR_INT_MAXUP)
		ft_putstr("Error\nnumber greater than int max detected\n");
	else if (data->error == ERROR_INT_MINDOWN)
		ft_putstr("Error\nnumber less than int min detected\n");
	else if (data->error == ERROR_IS_NOT_INT)
		ft_putstr("Error\nInvalid int detected\n");
	// else if (data->error == ERROR_ALREADY_SORT)
	// 	ft_putstr("Error\nAlready sort\n");
	// else
	// write_error_type2(data);
	if (data->error != NO_ERROR)
		exit(0);
	return (0);
}