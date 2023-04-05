#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint- deletes the head node of a linked list
 *@head: pointer to the first node
 *Return: the head node's data
 */

int pop_listint(listint_t **head)
{
struct listint_s *ptr = *head;
int n = (*head)->n;

if (*head == NULL)
return (0);

ptr = ptr->next;
free(*head);
*head = ptr;

return (n);
}
