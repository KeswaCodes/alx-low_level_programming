#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint- prints all elements of a linked list.
 *@h: pointer to first node
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t nodes;
nodes = 0;
if (h == NULL)
return (0);

else
while (1)
{
printf("%d \n", h->n);
nodes++;
h = h->next;
}

return (nodes);
}
