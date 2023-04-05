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
size_t nodes = 0;

if (h->next == NULL)
return (0);

while (h->next != NULL)
{
nodes++;
printf("%d \n", h->n);
h = h->next;
}

printf("%d\n", h->n);
nodes += 1;


return (nodes);
}
