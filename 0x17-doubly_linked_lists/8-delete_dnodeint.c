#include "lists.h"
/**
  * delete_dnodeint_at_index - delete node
  * @head: head pointer to the linked list
  * @index: node index
  * Return: 1 if success
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete;
	dlistint_t *aux;

	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = *head;
	while (aux != NULL)
	{
		if (index == count + 1)
		{
			delete = aux->next;
			aux->next = delete->next;
			free(delete);
			return (1);
		}
		if (index == 0)
		{
			*head = aux->next;
			free(aux);
			return (1);
		}
		aux = aux->next;
		count++;
	}
	return (-1);
}
