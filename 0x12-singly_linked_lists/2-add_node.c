#include "lists.h"

/**
* add_node - add new node at the beginnng
* @head: pointer to structure node
* @str: new string
*
* Return: Always 0 (Success)
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *check = malloc(sizeof(list_t));
if (check == NULL)
return (NULL);
if (str == NULL)
{
free(check);
return (NULL);
}
check->str = strdup(str);
check->len = strlen(str);
check->next = *head;
*head = check;
return (check);
}
