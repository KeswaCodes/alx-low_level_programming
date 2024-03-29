#include "lists.h"
/**
 *print_listint- prints all elements of a list_t list
 *@h: pointer to structs
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
const listint_t *ptr;
size_t nodes = 0;

if (h == NULL)
return (nodes);

for (ptr = h; ptr->next != NULL; ptr = ptr->next)
{
printf("%d\n", ptr->n);
nodes++;
}
printf("%d\n", ptr->n);
nodes++;

return (nodes);

}
