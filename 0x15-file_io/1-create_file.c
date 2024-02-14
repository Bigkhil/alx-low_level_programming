#include "main.h"
/**
 * read_textfile - function does something
 * @filename: string
 * @text_content: string
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	mode_t permissions = S_IRUSR | S_IWUSR;
	int file, written;

	if (filename == NULL)
		retirn (-1);
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
	written = write(file, text_content, sizeof(text_content));
	if (written == -1)
		return (-1);
	close(file);
	return (1);
}
