#include <stdlib.h>
#include "lists.h"

/**
 *listint_len- returns the number of elements in a linked list
 *@h: pointer to first node
 *Return: number of elements in linked lists.
 */

size_t listint_len(const listint_t *h)
{
size_t elements = 0;

if (h == NULL)
{
return (0);
}
while (h->next != NULL)
{
elements++;
h = h->next;
}
elements += 1;

return (elements);
}
