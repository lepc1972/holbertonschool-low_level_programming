#include "hash_tables.h"
/**
  * hash_table_get - function that give me the value of a key
  * @ht: the hash table you want to look into
  * @key: key you are looking for
  * Return: the value or Null
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);
	/* assigned node to start somewhere */
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
