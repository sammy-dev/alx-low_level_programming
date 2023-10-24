#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node in the listint_t list.
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_node = NULL;
	listint_t *current = NULL;

	while (*head)
	{
		current = (*head)->current;
		(*head)->current = new_node;
		new_node = *head;
		*head = current;
	}

	*head = new_node;

	return (*head);
}
