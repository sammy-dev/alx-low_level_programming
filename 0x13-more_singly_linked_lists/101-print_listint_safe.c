#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list..
 * @head: pointer to the first node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = NULL;
	const listint_t *current = NULL;
	size_t count = 0;
	size_t new_node;

	node = head;
	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		count++;
		node = node->next;
		current = head;
		new_node = 0;
		while (new_node < count)
		{
			if (node == current)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (count);
			}
			current = current->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
