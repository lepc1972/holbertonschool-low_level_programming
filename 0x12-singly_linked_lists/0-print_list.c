#include "lists.h"


/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: Pointed to head of a list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
const list_t *act = h;
int num = 0;

if (act == NULL)
{
return (0);
}


while (act != NULL)
{
num++;
if (act->str == NULL)
{
printf("[0] ");
printf("(nil)\n");
}
else
{
printf("[%d] ", act->len);
printf("[%s\n]", act->str);
}
act = act->next;

}
return (num);


}
