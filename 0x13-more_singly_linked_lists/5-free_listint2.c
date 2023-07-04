#include "lists.h"
/**
 *free_listint2- frees a listint_t list, & sets head to NULL
 *@head: ppointer to head pointer
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
{
*head = NULL;
return;
}

temp = *head;
while (temp->next != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
free(*head);
*head = NULL;

}
