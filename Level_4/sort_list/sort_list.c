#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	t_list	*second;
	int	tmp;
	
	if(!lst)
		return lst;
	cur = lst;
	while(cur->next)
	{
		second = cur->next;
		while(second)
		{
			if(!cmp(cur->data, second->data))
			{
				tmp = cur->data;
				cur->data = second->data;
				second->data = tmp;
			}
			second = second->next;
		}
		cur = cur->next;
	}
	return lst;
}
