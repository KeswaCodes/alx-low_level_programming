#include <stdlib.h>
#include "lists.h"


/**
 *list_len- returns the number of elements in list_t list
 *@h: pointer to first node
 *i: number of nodes
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t i = 0;

if (h == NULL)
return (0);
do {

h = h->next;
i++;
}while (h->next != NULL);

return (i);

}
