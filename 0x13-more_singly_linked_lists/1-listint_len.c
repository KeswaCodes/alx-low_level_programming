#include <stdlib.h>
#include "lists.h"

/**
 *listint_len- returns the number of elements in a linked list
 *@h: pointer to first node
 *Return: number of elements in linked lists.
 */

size_t listint_len(const listint_t *h)
{
size_t elements = 1;
listint_t *ptr = h;

if (h == NULL)
{
return (0);
}
do {

elements++;
} while (ptr->next != NULL);

elements += 1;

return (elements);
}
