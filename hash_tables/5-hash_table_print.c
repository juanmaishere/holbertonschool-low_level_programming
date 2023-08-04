#include "hash_tables.h"
void
hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

printf("{");

while (i < ht->size)
{
node = ht->array[i];
	while (node != NULL)
	{
	printf("'%s': '%s'", node->key, node->value);
		if (node->next != NULL)
		{
		printf(", ");
		}
		node = node->next;
	}
i++;
}
printf("}\n");
}
