#include "lists.h"
/**
 *delete_dnodeint_at_index- deletes a node at given index
 *@head: pointer to pointer of first node
 *@index: index to delete node
 *Return: 1 if successful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *count_ptr = *head, *delete_ptr = *head;
unsigned int position = 0, list_len = 1;

if (*head == NULL)
return (-1);

while (count_ptr != NULL)
{
count_ptr = count_ptr->next;
list_len++;
}

if (index > list_len)
return (-1);

if (index == 0)
{
*head = (*head)->next;
(*head)->prev = NULL;
}

else if (index == (list_len - 1))
delete_ptr->prev = NULL;

else
{
while (position < index)
{
position++;
delete_ptr = delete_ptr->next;
}
delete_ptr->prev->next = delete_ptr->next;
delete_ptr->next->prev = delete_ptr->prev;
}
 
free(delete_ptr);
return (1);
}
