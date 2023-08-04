#include "hash_tables.h"
void
hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	hash_node_t *node;

	printf("{");
	while (i < ht->size)
	{
	node = ht->array[i];
	while (node != NULL)
	{
	printf("'%s': '%s'", node->key, node->value);
	node = node->next;
	if (node != NULL)
	{
	printf(", ");
	}
	}
	i++;
	}
	printf("}\n");
}
