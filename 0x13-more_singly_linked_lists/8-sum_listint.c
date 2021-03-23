#include "lists.h"
/**
 * sum_listint - calc de addition of the integers of a list
 * @head: Pointer to the first element of a list
 * Return: An integer representing the sum of values
 */
int sum_listint(listint_t *head)
{
int add = 0;

if (head == NULL)
{
return (0);
}
else
{
while (head != NULL)
{
add = add + head->n;
head = head->next;
}
return (add);

}

}
