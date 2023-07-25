#include "lists.h"

void
free_dlistint(dlistint_t *head)
{
	dlistint_t *tp = head;
	dlistint_t *next;

	while (tp != NULL)
	{
		next = tp->next;
		free(tp);
		tp = next;
	}
}
