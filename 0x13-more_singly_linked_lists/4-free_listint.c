#include "lists.h"
/**
 *free_listint- frees a lsitsint_t list
 *@head: pointer to first node
 *Return: void
 */

void free_listint(listint_t *head)
{
listint_t *temp;
if (head == NULL)
return;

temp = head;
while (head != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
free(temp);

}
