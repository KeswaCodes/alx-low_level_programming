#include "lists.h"
/**
 *insert_nodeint_at_index- inserts a new node at a given position
 *@head: pointer to head pointer
 *@idx: the index of the list where the new node should be added.
 *Index starts at 0
 *@n: data to be inserted in new node
 *Return: address of new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

unsigned int list_len = 0, i = 0;
listint_t *temp, *old_idx, *new_node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (head == NULL)
return (NULL);

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

for (temp = *head; temp != NULL; temp = temp->next)
list_len++;

if (idx > list_len)
return (NULL);

temp = *head;
while (i < idx)
{
temp = temp->next;

i++;
}
old_idx = temp->next;
temp->next = new_node;
new_node->next = old_idx;

return (new_node);
}
