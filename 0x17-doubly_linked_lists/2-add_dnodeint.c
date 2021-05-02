#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning  list
 * @head: head of the linked list
 * @n: the number of nodes
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

