#include "lists.h"
/**
 * pop_listint - function that delets node and
 *return n
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
int pop_listint(listint_t **head)
{
int n = 0;
listint_t *nuevo;

if (*head == NULL)
{
return (0);
}
else
{
n = (*head)->n;
nuevo = (*head)->next;
free(*head);
*head = nuevo;

return (n);
}
}
