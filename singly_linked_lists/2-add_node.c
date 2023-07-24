#include "lists.h"

list_t
*add_node(list_t **head, const char *str)
{
	
	list_t *node1 = (list_t *)malloc(sizeof(list_t));

	if (node1 == NULL)
		return (NULL);

	node1->str = strdup(str);
	node1->len = strlen(str);
	if (node1->str == NULL)
	{
		free(node1);
		return (NULL);
	}

	node1->next = *head;

	*head = node1;

	return (node1);
}
