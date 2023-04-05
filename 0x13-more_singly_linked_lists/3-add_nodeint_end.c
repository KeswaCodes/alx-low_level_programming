#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end- adds a new node at the end of a linked list
 *@head: pointer to first node
 *@n: integer
 *Return: address of the new element(Success) or NULL(Failed)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
struct listint_s *last_node;
struct listint_s *ptr = *head;
 
last_node = malloc(sizeof(struct listint_s));

if (last_node == NULL)
return (NULL);
last_node->n = n;
last_node->next = NULL;
if (*head == NULL)
{
*head = last_node;
return (*head);
}

while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = last_node;
return (last_node);
}