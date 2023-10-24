#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @head: pointer to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	int test;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		test = *head - (*head)->next;
		if (test > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			count++;
			break;
		}
	}

	*head = NULL;

	return (count);
}
