#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: takes in a const dlistint head
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *aux = h;

	if (aux == NULL)
		return (0);
	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
