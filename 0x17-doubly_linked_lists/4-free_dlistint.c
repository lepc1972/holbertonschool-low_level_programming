#include "lists.h"
/**
 * free_dlistint - function to free a dlistint_t list
 * @head: pointer to head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
