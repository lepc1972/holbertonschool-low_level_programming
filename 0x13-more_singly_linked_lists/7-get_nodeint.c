#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: Pointed to head of a list
 * @index:  index of the node
 *
 * Return: Pointer to a node select
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node = 0;

if (head == NULL)
{
return (NULL);
}
else
{
while (head)
{
if (node == index)
{
return (head);
}
else
{
head = head->next;
node++;

}
}

return (NULL);
}

}
