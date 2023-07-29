#include "lists.h"

int
delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{	unsigned int i = 0;
	dlistint_t *tmp;
	dlistint_t *tmp2;

	tmp2 = *head;
	tmp = *head;
	while (i < index)
	{
	tmp2 = tmp2->next;
	i++;
	}
	if (*head == NULL)
	{
	return (-1);
	}
	if (index == 0 && tmp->next == NULL)
	{
	free(tmp);
	*head = NULL;
	}
	else if (index > 0 && tmp2->next == NULL)
	{
	(tmp2->prev)->next = NULL;
	free(tmp2);
	}
	else if (tmp2->prev == NULL)
	{
	*head = tmp2->next;
	(tmp2->next)->prev = NULL;
	free(tmp2);
	}
	else
	{
	(tmp2->next)->prev = tmp2->prev;
	(tmp2->prev)->next = tmp2->next;
	free(tmp2);
	}
	return (1);
}
