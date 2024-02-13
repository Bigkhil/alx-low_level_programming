#include "main.h"
/**
 * read_textfile - function does something
 * @filename: string
 * @letters: size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(letters);
	int file;
	ssize_t bytes;

	if (filename == NULL || buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, buffer, letters);
	if (bytes == -1)
		return (0);
	return (bytes);
}
