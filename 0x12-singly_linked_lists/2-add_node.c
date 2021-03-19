#include "lists.h"
/**
 * _strlen - returns length string.
 * @s: pointer to String
 * Return: Nothing
 */
int _strlen(const char *s)
{
int x = 0;

while (*(s + x) != '\0')
{
x++;
}

return (x);
}
/**
* add_node - function add node
* @head: head of  list
* @str: String
* Return: new
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new != NULL)
{
new->str = strdup(str);
new->len = _strlen(str);
new->next = *head;
*head = new;
}
else
{
return (NULL);
}
*head = new;
return (new);

}
