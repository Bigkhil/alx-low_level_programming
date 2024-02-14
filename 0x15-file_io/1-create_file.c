#include "main.h"
/**
 * create_file - function does something
 * @filename: string
 * @text_content: string
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	mode_t permissions = S_IRUSR | S_IWUSR;
	int file, written = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_EXCL, permissions);
	if (file == -1)
	{
		if (errno == EEXIST)
		{
			file = open(filename, O_WRONLY | O_TRUNC);
		}
	}
	if (file == -1)
		return (-1);
	if (text_content)
		written = write(file, text_content, strlen(text_content));
	else
	{
		file = open(filename, O_WRONLY | O_TRUNC);
	}
	if (written == -1)
		return (-1);
	close(file);
	return (1);
}
