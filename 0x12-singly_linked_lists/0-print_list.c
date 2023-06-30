#include "lists.h"
/**
 *print_list- prints a linked list
 *@h: pointer to linked list
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{

size_t nodes = 0;
const list_t *ptr;
if (h == NULL)
return (nodes);

for (ptr = h; ptr->next != NULL; ptr = ptr->next)
{
if (ptr->str == NULL)
printf("[0] (nil)\n");

else
printf("[%u] %s\n", ptr->len, ptr->str);
nodes++;

}
printf("[%u] %s\n", ptr->len, ptr->str);
nodes++;


return (nodes);
}


