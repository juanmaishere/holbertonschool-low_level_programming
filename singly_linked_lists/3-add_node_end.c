#include "lists.h"

list_t
*add_node_end(list_t **head, const char *str)
{
	list_t *node2 = (list_t *)malloc(sizeof(list_t));
	list_t *nodend = *head;

	if (node2 == NULL)
	{
	return (NULL);
	}

	node2->str = strdup(str);
	node2->len = strlen(str);
	node2->next = NULL;

	if (*head == NULL)
	{
	*head = node2;
	return (node2);
	}
	if (node2->str == NULL)
	{
	free(node2);
	return (NULL);
	}

	while (nodend->next != NULL)
	{
	nodend = nodend->next;
	}
	nodend->next = node2;

return (node2);
}
