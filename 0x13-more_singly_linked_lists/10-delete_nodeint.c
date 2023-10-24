#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to the first element in the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	while (j < index - 1)
	{
		if (!new || !(new->next))
			return (-1);
		new = new->next;
		j++;
	}


	current = new->next;
	new->next = current->next;
	free(current);

	return (1);
}
