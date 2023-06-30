#include "lists.h"
/**
 *add_node_end- adds a new node at the end of a linked list_t list
 *@head: pointer to first node
 *@str: string to be copied into node data
 *Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *new_node = malloc(sizeof(list_t)), *temp;

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}
else
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
return (new_node);

}
