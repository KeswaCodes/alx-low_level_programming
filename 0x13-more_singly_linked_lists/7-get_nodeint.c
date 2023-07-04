#include "lists.h"
/**
 *get_nodeint_at_index- returns the nth node of a listint_t linked list.
 *@head: pointer to first node
 *@index:  index of the node, starting at 0
 *Return: nth node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *temp;
unsigned int i = 0, list_len = 0;

if (head == NULL)
return (NULL);

for (temp = head; temp->next != NULL; temp = temp->next)
list_len++;

if (index > list_len)
return (NULL);

temp = head;
for (temp = head; temp != NULL ; temp = temp->next)
{
if (i == index)
break;

i++;
}

return (temp);
}
