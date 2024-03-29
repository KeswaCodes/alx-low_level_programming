#include "lists.h"
/**
 *get_dnodeint_at_index- returns the nth node of a linked list
 *@head: poiniter to first node
 *@index: index of the node to be returned
 *Return: nth node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int position = 0, num_nodes = 0;
if (head == NULL)
return (NULL);

while (temp != NULL)
{
num_nodes++;
temp = temp->next;
}

if (index > num_nodes)
return (NULL);

if (index == 0)
return (head);

while (position < index)
{
position++;
head = head->next;
}

return (head);
}
