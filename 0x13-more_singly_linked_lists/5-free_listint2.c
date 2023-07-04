#include "lists.h"
/**
 *free_listint2- frees a lsitint_t list, & sets head to NULL
 *@head: ppointer to head pointer
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
if (*head == NULL)
return;


while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
if (*head == NULL)
return;
}
