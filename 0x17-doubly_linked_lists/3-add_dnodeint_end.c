#include "lists.h"
/**
 *add_dnodeint_end- adds a new node at the end of a linked list
 *@head: pointer to pointer to first node
 *@n: new node's data
 *Return: addnress of new node (success) or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *last_node, *temp;

temp = *head;
last_node = malloc(sizeof(dlistint_t));
if (last_node == NULL)
return (NULL);

last_node->n = n;
last_node->next = NULL;

if (temp == NULL)
{
last_node->prev = NULL;
*head = last_node;
}

else
{
while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = last_node;
last_node->prev = temp;
}

return (last_node);

}
