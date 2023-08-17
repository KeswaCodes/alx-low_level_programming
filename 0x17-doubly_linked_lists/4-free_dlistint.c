#include "lists.h"
/**
 *free_dlistint- frees a linked list
 *@head: pointer to first node
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;

if (head == NULL)
{
free(head);
return;
}


while (temp != NULL)
{
temp = head->next;
free(head);
head = temp;
}
free(head);
return;
}
