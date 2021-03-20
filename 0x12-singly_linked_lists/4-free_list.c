#include "lists.h"

/**
 * free_list - function that frees a structure.
 * @head: Pointed to head
 *
 * Return: Void
 */
void free_list(list_t *head)
{
if (head == NULL)
{
free(head);
return;
}
free_list(head->next);
free(head->str);
free(head);
}
