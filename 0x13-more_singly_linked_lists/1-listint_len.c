#include "lists.h"
/**
 * listint_len -  prints all the elements of a listint_t list.
 * @h: Is a first structure of the list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
int i;

if (h == NULL)
{
return (0);

}
{
for (i = 0; h != NULL; i++)
{
h = h->next;
}
return (i);
}

}