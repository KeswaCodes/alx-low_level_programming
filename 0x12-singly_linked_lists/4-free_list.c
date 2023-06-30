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
temp = head;

if (temp->next == NULL)
{
free(temp);
return;
}

else
{
while (temp->next != NULL)
{
if (temp->str == NULL || temp->str != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
}
free(temp);
return;

}
 
}
