#include "lists.h"

/**
 *add_nodeint- adds a node at the begninning of a listint_t list
 *@head: pointer to head pointer
 *@n: integer value to be stored in node
 *Return: pointer/address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp, *new_node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);

}

temp = *head;
*head = new_node;
new_node->next = temp;

return (new_node);


}
