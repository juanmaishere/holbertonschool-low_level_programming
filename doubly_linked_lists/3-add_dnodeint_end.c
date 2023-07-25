#include "lists.h"

dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *node3;
	dlistint_t *temp;

	temp = *head;

	while (temp != NULL && temp->next != NULL)
	{
	temp = temp->next;
	}

	node3 = malloc(sizeof(dlistint_t));

	if (node3 == NULL)
	{
	return (NULL);
	}

	node3->n = n;
	node3->next = NULL;

	if (*head == NULL)
	{
	*head = node3;
	}
	else
	{
	temp->next = node3;
	node3->prev = temp;
	}

	return (node3);
}
