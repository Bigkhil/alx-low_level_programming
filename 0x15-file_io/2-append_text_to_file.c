#include "main.h"
/**
 * append_text_to_file - function does something
 * @filename: string
 * @text_content: string
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
		write(file, text_content, strlen(text_content));
	return (1);
}
