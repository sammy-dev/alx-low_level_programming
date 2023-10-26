#include <unistd.h>

/**
 * _putchar - writes a character to c stout
 * @j: The character to print
 *
 * Return: On success 1.
 *
 */
int _putchar(char j)
{
	return (write(1, &j, 1));
}
