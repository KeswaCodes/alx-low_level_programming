#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint- adds a new node at the beginning of a linked list
 *@head: pointer to the first node
 *@n: integer
 *Return: address of new element(Success)
 *or NULL(Failed)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
struct listint_s *new_node;

new_node = malloc(sizeof(struct listint_s));

if (new_node == NULL)
return (NULL);


new_node->n = n;
new_node->next = *head;
*head = new_node;

return (*head);
}
