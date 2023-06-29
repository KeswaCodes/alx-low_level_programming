#include "lists.h"
/**
 *list_len- returns the number of elements in a linked list_t list
 *@h: pointer to first node
 *Return: number of nodes in a linked list_t list
 */

size_t list_len(const list_t *h)
{
size_t nodes = 0;
const list_t *ptr;

for (ptr = h; ptr->next != NULL; ptr = ptr->next)
{
if (ptr->next == NULL)
return (nodes);
else
nodes++;

}
nodes++;

return (nodes);

}
