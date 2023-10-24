#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to a struct
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (number);
}
