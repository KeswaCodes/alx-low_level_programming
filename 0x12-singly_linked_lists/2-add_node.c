#include "lists.h"
/**
 *add_node- adds a new node at the beginning of a linked list_t list
 *@head: pointer to first node
 *@str: string data to be stored in new node
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node, *temp;

  
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

else
{
temp = *head;
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = temp;
*head = new_node;
}
return (new_node);
}
