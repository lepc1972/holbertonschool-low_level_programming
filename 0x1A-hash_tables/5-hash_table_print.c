#include "hash_tables.h"
/**
  * hash_table_print - Print a hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx;
	char *flg = "";

	idx = 0;
	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			printf("%s", flg);
			printf("'%s': '%s'", node->key, node->value);
			flg = ", ";
			node = node->next;
		}
	idx++;
	}
	printf("}\n");
}
