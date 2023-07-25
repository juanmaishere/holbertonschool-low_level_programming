#include "lists.h"

int
sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *tmp;

	tmp = head;

	while (tmp != NULL)
	{
	count += tmp->n;
	tmp = tmp->next;
	}
return (count);
}
