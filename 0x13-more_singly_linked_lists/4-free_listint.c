#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head of a list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
