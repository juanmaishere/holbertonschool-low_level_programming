#include "lists.h"

size_t print_list(const list_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			l++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			l++;
		}
		h = h->next;
	}
	return (l);
}
