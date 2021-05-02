#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a linked list
 * @head: takes in the head of the linked list
 * @n: number of nodes
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

