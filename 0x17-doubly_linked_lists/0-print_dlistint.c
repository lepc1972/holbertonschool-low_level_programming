#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: pointer to the constant dlistint_t head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
