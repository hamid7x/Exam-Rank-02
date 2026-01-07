

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *cur = *begin_list;
	t_list *prev = NULL;
	t_list *to_free;

	while(cur)
	{
		if(cmp(cur->data, data_ref) == 0)
		{
			to_free = cur;
			if(prev == NULL)
			{
				*begin_list = cur->next;
				cur = *begin_list;
			}
			else
			{
				prev->next = cur->next;
				cur = prev->next;
			}
			free(to_free);
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
}
