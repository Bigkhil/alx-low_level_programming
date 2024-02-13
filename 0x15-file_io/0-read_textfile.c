#include "main.h"
/**
 * read_textfile - function does something
 * @filename: string
 * @letters: size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;

	if (filename == NULL)
		return (0);
	char *buffer = malloc(letters);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, buffer, letters);
	if (bytes == -1)
		return (0);
	return (bytes);
}
