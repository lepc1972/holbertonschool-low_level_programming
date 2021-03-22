#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - new node at the
 * end of a listint_t list
 * @head: first structure of a linked list
 * @n: number to set field n in the new node.
 *
 * Return: pointer to a new add node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nuevo, *aux = NULL;

nuevo = malloc(sizeof(listint_t));
if (nuevo == NULL)
{
return (NULL);
}
else
{
nuevo->n = n;
nuevo->next = NULL;
}
if (*head == NULL)
{
*head = nuevo;
}
else
{
aux = *head;
while (aux->next != NULL)
{
aux = aux->next;
}

aux->next = nuevo;
}
return (nuevo);



}
