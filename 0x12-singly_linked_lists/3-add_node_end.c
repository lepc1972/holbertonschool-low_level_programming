#include "lists.h"
/**
 * _strlen - returns the length
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
* add_node_end - function that adds a node to the final
* @head: head of  list
* @str: String
* Return: new
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *aux;

new = malloc(sizeof(list_t));
if (new != NULL)
{
new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;

}
else
{
return (NULL);
}

if (*head == NULL)
{
*head = new;
return (*head);

}

aux = *head;
while (aux->next != NULL)
{
aux = aux->next;
}
aux->next = new;

return (new);


}
