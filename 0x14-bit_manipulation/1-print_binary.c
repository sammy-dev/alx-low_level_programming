#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int right;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (num = n, right = 0; (num >>= 1) > 0; right++)
		;

	for (; right >= 0; right--)
	{
		if ((n >> right) & 1)
			printf("1");
		else
			printf("0");
	}
}
