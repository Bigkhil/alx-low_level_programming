#include "main.h"
/**
 * valid - function does something
 * @x: int
 * @files: pointer to array of strings
 * Return: void
 */
void valid(int x, char **files)
{
	if (x != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", files[1], files[2]);
		exit(97);
	}
}
/**
 * main - check the code
 *@argc: number of arguments
 *@argv: pointer to array of strings
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];
	int file1, file2, written = 0;

	valid(argc, argv);
	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, permissions);
	file1 = read(file1, buff, 1024);
	if (file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file2 == -1)
	{
		if (errno == EEXIST)
			file2 = open(argv[2], O_TRUNC | O_WRONLY);
	}
	written = write(file2, buff, strlen(buff));
	if (written == -1 || file2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(file2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", file2);
		exit(100);
	}
	if (close(file1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", file1);
		exit(100);
	}
	return (0);
}
