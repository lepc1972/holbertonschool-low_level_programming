#include "lists.h"


/**
 * list_len - function that returns the number of nods
 * @h: Pointed to head
 *
 * Return: The # of nods
 */
size_t list_len(const list_t *h)
{
int nods = 1;

if (h == NULL)
{
return (0);
}
nods = nods + list_len((h->next));

return (nods);
}
