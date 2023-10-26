#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 *
 */

int get_endianness(void)
{
	int num;
	char *num1;

	num = 1;
	num1 = (char *)&num;
	return (*num1);
}
