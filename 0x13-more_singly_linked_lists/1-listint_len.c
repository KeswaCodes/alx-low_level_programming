#include "lists.h"
/**
 *listint_len- returns the number of elements in a linked listint_t list.
 *@h: pointer t first node
 *Return: number of elelments in a linked list
 */

size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
const listint_t *ptr;
if (h == NULL)
return (nodes);

for (ptr = h; ptr->next != NULL; ptr = ptr->next)
nodes++;

nodes++;

return (nodes);
}
