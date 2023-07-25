#include "lists.h"

dlistint_t
*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	node = head;

	while (i < index && node != NULL)
	{
	node = node->next;
	i++;
	}
	if (i < index)
	{
	return (NULL);
	}
	return (node);
}
