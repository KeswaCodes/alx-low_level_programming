#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2- frees space allocated to singy linked list
 *@head: pointer to the first node
 *Return: Void
 */

void free_listint2(listint_t **head)
{
struct listint_s *ptr = *head;

while (ptr->next != NULL)
{
ptr = ptr->next;
*head = NULL;
*head = ptr;
}
*head = NULL;
}
