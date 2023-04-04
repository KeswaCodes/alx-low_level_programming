#include <stdlib.h>
#include "lists.h"

/**
 *free_listint- freees a linked list
 *@head: pointer to first node
 *Return: void
 */

void free_listint(listint_t *head)
{
struct listint_s *temp;

temp = head;

while (temp->next != NULL)
{
head = temp;
temp = temp->next;
free(head);
head = temp;
}
free(temp);
}
