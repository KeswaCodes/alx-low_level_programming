#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index- returns the nth node of a linked list
 *@head: pointer to the first node
 *@index: position of node
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int position = 0;
struct listint_s *ptr = head;

if (ptr == NULL)
return (NULL);

while (ptr->next != NULL && position < index)
{
ptr = ptr->next;  
position++;
}

return (ptr);
}
