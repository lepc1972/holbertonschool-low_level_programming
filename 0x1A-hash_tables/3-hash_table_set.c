#include "hash_tables.h"
/**
  * hash_table_set - function that adds an element to the hash table
  * @ht: hash table
  * @key: key for the hash table
  * @value: value of the key
  * Return: 1 on success, 0 on fail
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *ptr;
	int idx;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[idx];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = NULL;
	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		/* check if the key matches*/
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	return (1);
}
