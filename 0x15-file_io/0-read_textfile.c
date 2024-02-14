#include "main.h"
/**
 * read_textfile - function does something
 * @filename: string
 * @letters: size_t
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	int file;
	ssize_t bytes, byteswritten;

	if (filename == NULL || buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, buffer, letters);
	if (bytes == -1 )
		return (0);
	byteswritten = write(STDOUT_FILENO, buffer, letters);
	if (byteswritten == -1)
		return (0);
	close(file);
	return (byteswritten);
}
