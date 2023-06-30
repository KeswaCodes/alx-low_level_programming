#include "lists.h"
/**
 *free_list- frees a list_t list
 *@head: pointer to first node
 *Return: void
 */

void free_list(list_t *head)
{
list_t *temp;

if (head == NULL)
return;
else


if (head->next == NULL)
{
free(head);
return;
}

else
{
temp = head;
if (temp->next != NULL && temp->next->next == NULL)
{
if (temp->str == NULL || temp->str != NULL)
temp = temp->next;
free(head);
head = temp;
free(head);
}
while (temp->next != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
}
head = temp;
free(head);
return;

}

