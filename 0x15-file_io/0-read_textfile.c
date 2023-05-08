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
	ssize_t readed , writen;
	char *buffer;
	FILE *file;
	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	readed = fread(buffer, sizeof(char), letters, file);
	if (readed == -1) {
		free(buffer);
		fclose(file);
		return (0);
	}
	writen = write(1, buffer, readed);
	if (writen == -1 || writen != readed)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);
	return (readed);
}
