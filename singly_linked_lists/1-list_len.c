#include "lists.h"

size_t
list_len(const list_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			l++;
		}
		else
		{
			l++;
		}
		h = h->next;
	}
	return (l);
}
