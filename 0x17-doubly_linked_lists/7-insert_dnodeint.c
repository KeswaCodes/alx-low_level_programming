#include "lists.h"
/**
 *insert_dnodeint_at_index- inserts a node at the given index
 *@h: pointer to pointer of first node
 *@idx: index of node to be inserted
 *@n: data of the node to be inserted
 *Return: address of new node(success) or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int node_len = 1, position = 0;
dlistint_t *temp = *h, *new_node, *current = *h;

if (*h == NULL)
return (NULL);

while (temp != NULL)
{
temp = temp->next;
node_len++;
}

if (idx > node_len)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
(*h)->prev = new_node;
return (new_node);
}

while (position < idx)
{
position++;
current = current->next;
}
new_node->n = n;
new_node->prev = current->prev;
current->prev->next = new_node;

current->prev = new_node;
new_node->next = current;

return (new_node);
}
