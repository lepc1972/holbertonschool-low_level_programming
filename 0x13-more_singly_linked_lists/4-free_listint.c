#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free nodes
 * @head: Pointer to the start of the list
 */
void free_listint(listint_t *head)
{
listint_t *liberar;

while (head != NULL)
{
liberar = head;
head = head->next;
free(liberar);
}

}
