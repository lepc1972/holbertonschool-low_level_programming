#include "lists.h"
/**
  * sum_dlistint - sums up all the data
  * @head: head of the linked list
  * Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	unsigned int sum = 0;

	aux = head;

	while (aux != NULL)
	{
		sum = sum + aux->n;
		aux = aux->next;
	}
	return (sum);
}
