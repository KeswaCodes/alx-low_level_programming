#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a doubly linked list
 *@h: pointer to first node
 *Return: number of element sin a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
int n_lmnt = 0;
dlistint_t *temp;

if (!h->n)
;
else
n_lmnt++;
temp = h->next;
while (temp != NULL)
{
if (!temp->n)
continue;

n_lmnt++;
temp = temp->next;
}

return (n_lmnt);
}
