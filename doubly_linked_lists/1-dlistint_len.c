#include "lists.h"

size_t
dlistint_len(const dlistint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
	l++;
	h = h->next;
	}
return (l);
}
