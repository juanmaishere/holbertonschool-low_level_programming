#include "lists.h"

dlistint_t
*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *nodo1;
	dlistint_t *tmp;
	dlistint_t *tmp2;

	nodo1 = malloc(sizeof(dlistint_t));

	if (nodo1 == NULL)
		return (NULL);

	tmp = *h;
	nodo1->n = n;
	while (i < idx)
	{
	tmp = tmp->next;
	i++;
	}
	if (tmp->next == NULL)
	{
	tmp->next = nodo1;
	nodo1->prev = tmp;
	nodo1->next = NULL;
	}
	else
	{
	tmp2 = tmp->next;

	tmp->next = nodo1;
	nodo1->prev = tmp;
	nodo1->next = tmp2;
	tmp2->prev = nodo1;
	}

return (nodo1);
}
