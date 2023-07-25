#include "lists.h"

size_t
print_dlistint(const dlistint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	l++;
	}
return (l);
}
