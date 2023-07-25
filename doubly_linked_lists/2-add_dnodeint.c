#include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *node3;

	node3 = malloc(sizeof(dlistint_t));
	if (node3 == NULL)
	{
	return (NULL);
	}

	node3->n = n;

	node3->next = *head;
	*head = node3;
	node3->prev = NULL;

	return (node3);
}
