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
int i = 0;

h = malloc(sizeof(struct list_s));
if (h == NULL)
{
printf("[%d] (%s) \n", 0, "(nil)");
}

do {
printf("%u %s \n", h->len, h->str);
i++;
h = h->next;
} while (h->next != NULL);
return (i);
}
