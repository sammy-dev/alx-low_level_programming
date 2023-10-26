#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, num;
	int count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (num = 1, result = 0, count--; count >= 0; count--, num *= 2)
	{
		if (b[count] == '1')
			result += num;
	}

	return (result);
}
