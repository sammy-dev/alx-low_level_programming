#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to index of a bit
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned int check;

	if (index > 64)
		return (-1);
	check = index;
	for (num = 1; hold > 0; num *= 2, check--)
		;

	if ((*n >> index) & 1)
		*n -= num;

	return (1);
}
