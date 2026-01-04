#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	while(begin_list)
	{
		count++;
		begin_list = begin_list -> next;
	}
	return count;
}
/*
int main()
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->data = "one";
	node1->next = node2;
	node2->data = "two";
	node2->next = node3;
	node3->data = "three";
	node3->next = NULL;

	head = node1;
	printf("%d\n",ft_list_size(NULL));
	printf("%d\n", ft_list_size(head));
	printf("%d\n", ft_list_size(node2));
	printf("%d\n", ft_list_size(node3));
}
*/
