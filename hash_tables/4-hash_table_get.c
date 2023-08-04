#include "hash_tables.h"
#include <string.h>
char
*hash_table_get(const hash_table_t *ht, const char *key)
{
	int tt;
	hash_node_t *move;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);

	tt = key_index((unsigned char *)key, ht->size);

	move = ht->array[tt];

	while (move != NULL && strcmp(move->key, key) != 0)
		{
		move = move->next;
		}
		if (move == NULL)
		{
		return (NULL);
		}
		else
		{
		return (move->key);
		}
}
