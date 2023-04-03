#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list- prints all elements of a list_t list.
 *@h: pointer to first node
 *Return: size_t(number of nodes)
 */

size_t print_list(const list_t *h)
{
size_t i = 1;

h = malloc(sizeof(struct list_s));
if (h == NULL)
return (0);
do {
if (h->str == NULL)
{
printf("[%d] (%s) \n", 0, "(nil)");
}
printf("%u %s \n", h->len, h->str);
h = h->next;
i++;
} while (h->next != NULL);
printf("%u %s \n", h->len, h->str);

return (i);
}
