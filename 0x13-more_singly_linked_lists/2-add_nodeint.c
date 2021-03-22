#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: first structure of a linked list
 * @n: number to set field n in the new node.
 *
 * Return: pointer to a new add node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nuevo;

nuevo = malloc(sizeof(listint_t));
if (nuevo == NULL)
{
return (NULL);
}
else
{
nuevo->n = n;
}
if (*head == NULL)
{
nuevo->next = NULL;
*head = nuevo;
return (nuevo);
}
else
{
nuevo->next = *head;
*head = nuevo;
return (nuevo);
}


}










