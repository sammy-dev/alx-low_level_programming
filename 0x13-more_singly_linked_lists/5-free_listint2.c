#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to address of a listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
