#include "lists.h"

/**
 *  add_node_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element in the list.
 * @n: Data to inser in the list.
 * return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
