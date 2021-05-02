#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node in to a given position
  * @h: pointer to a pointer head
  * @idx: node index
  * @n: number of nodes
  * Return: NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	aux = *h;
	while (aux != NULL)
	{
		if (count + 1 == idx)
		{
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		aux = aux->next;
		count++;
	}
	free(new);
	return (NULL);
}
