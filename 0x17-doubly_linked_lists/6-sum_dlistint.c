#include "lists.h"
/**
 *sum_dlistint- returns the sum of all the data in a linked list
 *@head: pointr to first node
 *Return: sum of the data(n) of a linked list
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
