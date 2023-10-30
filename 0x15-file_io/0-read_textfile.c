#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *temp;

	if (filename == NULL)
		return (0);


	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, temp, letters);
	w = write(STDOUT_FILENO, temp, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(o);

	return (w);
}
