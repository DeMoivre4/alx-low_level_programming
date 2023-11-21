#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to the POSIX output
 * @filename: text file.
 * @letters: number of letters.
 * Return: actual number of bytes read and printed.
 */

ssize_t read_textile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, O_RONLY);
	if (x == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	z = read(x, buf, letters);
	y = write(STDOUT_FILEMO, buf, z);

	free(buf);
	close(x);
	return (y);
}
