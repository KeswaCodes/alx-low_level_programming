#include "lists.h"
/**
 *print_list- prints a linked list
 *@h: pointer to linked list
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{

char *string = "[0] (nil)";
size_t nodes = 0;
const list_t *ptr;

if (h == NULL)
return (0);

for (ptr = h; ptr->next != NULL; ptr = ptr->next)
{
if (ptr->str == NULL)
printf("%s\n", string);

else
printf("[%u] %s\n", ptr->len, ptr->str);
nodes++;

}
printf("[%u] %s\n", ptr->len, ptr->str);
nodes++;


return (nodes);
}
