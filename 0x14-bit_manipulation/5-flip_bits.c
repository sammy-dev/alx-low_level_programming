#include "main.h"
#include <stdio.h>
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another.
 * @n: first number need to flip
 * @m: second number to be fliped
 * Return: number of bits to change
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num, temp = 0;
	unsigned long int check;
	unsigned long int len = n ^ m;

	for (num = 63; num >= 0; num--)
	{
		check = len >> num;
		if (check & 1)
			temp++;
	}

	return (temp);
}
