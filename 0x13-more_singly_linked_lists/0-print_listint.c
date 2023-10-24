#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t
 * @h: Pointer to a list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
