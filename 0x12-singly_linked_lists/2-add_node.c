#include <stdlib.h>
#include "lists.h"

/**
 *add_node- adds a new node at the beginning of a list
 *@head: pointer to first node
 *@str: malloc'ed string
 *Return: address of new element(Success) or NULL(Failed)
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *node_ptr;
size_t s_length = 0;

if (str == NULL)
s_length = 0;

do {
s_length++;
} while (str[str_len] != '\0');

node_ptr = malloc(sizeof(list_t));
if (node_ptr == NULL)
return (NULL);
if (*head == NULL)
node_ptr->next = NULL;

else
node_ptr->next = *head;

node_ptr->str = strdup(str);
node_ptr->len = s_length
*head = node_ptr;

return (*head);
}
