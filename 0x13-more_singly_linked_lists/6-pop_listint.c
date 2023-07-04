#include "lists.h"

/**
 *pop_listint- deletes the head node of a listint_t linked list
 *@head: pointer to first node
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{

int head_node_data;
listint_t *temp;

if (head == NULL)
return (0);

temp = *head;
head_node_data = temp->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (head_node_data);
}
