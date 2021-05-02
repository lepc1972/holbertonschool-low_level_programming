#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list
 * @index: index of the linked list
 * Return: the nth node of the linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int count = 0;

	aux = head;
	while (aux != NULL)
	{
		if (count == index)
			return (aux);
	count++;
	aux = aux->next;
	}
	return (aux);
}
