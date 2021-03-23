#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position
 * @head: pointer to Pointed to head of a list
 * @idx:  index of the node to insert
 * @n: Value to set on field n of new node
 *
 * Return: Pointer to a node select
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *actual, *siguiente, *nuevo;

	if (!head)
		return (NULL);

	nuevo = malloc(sizeof(listint_t));

	if (!nuevo)
		return (NULL);

	nuevo->n = n;
	nuevo->next = NULL;

	if (idx == 0)
	{
		nuevo->next = *head;
		*head = nuevo;
		return (nuevo);
	}

	actual = *head;
	while (actual)
	{
		if (node == idx - 1)
		{
			siguiente = actual->next;
			actual->next = nuevo;
			nuevo->next = siguiente;
			return (nuevo);
		}
		actual = actual->next;
		node++;
	}
	return (NULL);
}
