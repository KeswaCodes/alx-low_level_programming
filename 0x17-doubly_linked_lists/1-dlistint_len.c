#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a doubly linked list
 *@h: pointer to first node
 *Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t n_lmnt = 0;
dlistint_t *temp;
if (h == NULL)
return (n_lmnt);

if (!h->n)
;
else
{
n_lmnt++;
if (h->next == NULL)
return (n_lmnt);
temp = h->next;
}

while (temp != NULL)
{
if (!temp->n)
continue;

if (temp->next == NULL)
{
n_lmnt++;
return (n_lmnt);
}
n_lmnt++;
temp = temp->next;
}

return (n_lmnt);
}
