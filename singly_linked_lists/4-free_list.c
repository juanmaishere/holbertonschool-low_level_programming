#include "lists.h"

void
free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tp = head;

		if (head->str != NULL)
		{
		free(head->str);
		}

		head = head->next;

		free(tp);
	}
}
