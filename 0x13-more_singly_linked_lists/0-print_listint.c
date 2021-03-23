#include "lists.h"
/**
 * print_listint - function that print elements listint_t list.
 * @h: Is a first structure of a linked list (head)
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node = 1;

if (h == NULL)
{
return (0);
}
else
{
printf("%d\n", h->n);
node = node + print_listint(h->next);
return (node);
}


}
