#include "lists.h"
/**
 *print_dlistint - prints a doubly linked list's elements
 *@h: pointer to first node
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *temp;
size_t num_nodes = 0;

if (h == NULL)
return (num_nodes);

printf("%d\n", h->n);
num_nodes++;
temp = h->next;
while (temp != NULL)
{
printf("%d\n", temp->n);
num_nodes++;
temp = temp->next;
}

return (num_nodes);

}
