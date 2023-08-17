#include "lists.h"
/**
 *add_dnodeint- adds a node at the beginning of a dlist list
 *@head: pointer to pointer of first node
 *@n: new node's data
 *Return: address of new node(successful) or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;

if (*head == NULL)
new_node->next = NULL;

else
{
new_node->next = *head;
new_node->next->prev = new_node;
}

*head = new_node;

return (new_node);
}


