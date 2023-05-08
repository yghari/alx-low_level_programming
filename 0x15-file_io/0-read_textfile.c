#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opn, red, wrt;
	char *buffer;

	buffer =  malloc(letters);
	opn = open(filename, O_RDONLY);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	red = read(opn, buffer, letters);
	wrt = write(1, buffer, red);
	if (opn == -1 || red == -1 || wrt == -1 || wrt != red)
	{
		free(buffer);
		close(opn);
		return (0);
	}
	free(buffer);
	close(opn);
	return (red);
}
