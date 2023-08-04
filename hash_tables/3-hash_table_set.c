#include "hash_tables.h"
#include "string.h"
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{	int tt;

	hash_node_t *node, *move;

	if (key == NULL || *key == '\0' || ht == NULL)
	{
	return (0);
	}
	tt = key_index((unsigned char *)key, ht->size);

	move = ht->array[tt];

	while (move != NULL && strcmp(move->key, key) != 0)
	{
	move = move->next;
	}
	if (move == NULL)
	{
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->value = strdup(value);
	node->key = strdup(key);
	node->next = ht->array[tt];
	ht->array[tt] = node;
	}
	else
	{
	move->value = strdup(value);
	}
return (1);
}
