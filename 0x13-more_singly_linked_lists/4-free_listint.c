#include <stdlib.h>
#include "lists.h"

/**
 *free_listint- frees memory allocated to a singly linked list
 *@head: pointer to the first node
 *Return: Void;
 */

void free_listint(listint_t *head)
{
struct listint_s *lead_ptr = head;


while (lead_ptr != NULL)
{

free(head);
lead_ptr = lead_ptr->next;
head = lead_ptr;
}

}
