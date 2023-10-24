#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the first node of a linked list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new = head;
	listint_t *current = head;

	if (!head)
		return (NULL);

	while (new && current && current->next)
	{
		current = current->next->next;
		new = new->next;
		if (current == new)
		{
			new = head;
			while (new != current)
			{
				new = new->next;
				current = current->next;
			}
			return (current);
		}
	}

	return (NULL);
}
