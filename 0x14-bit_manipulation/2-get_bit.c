#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bit in
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index > 64)
		return (-1);

	check = n >> index;

	return (check & 1);
}
