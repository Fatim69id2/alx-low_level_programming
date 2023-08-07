#include "main.h"
#include <stdio.h>

/**
 * with_error - Checks if files can be opened
 * @code: Code
 * @file: File
 * @argv: Arguments vector
 * Return: NULL
 */
void with_error(int code, int file, char *argv[])
{
	if (code == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments passed
 * @argv: Double pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int code, file, err_close;
	ssize_t x, y;
	char w[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp code file");
		exit(97);
	}

	code = open(argv[1], O_RDONLY);
	file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	with_error(code, file, argv);

	x = 1024;
	while ((x = read(code, w, 1024)) >= 0)
	{
		if (x == 0)
		break;

		y = write(file, w, x);
		if (y == -1)
		with_error(0, -1, argv);
	}
	err_close = close(code);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", code);
		exit(100);
	}

	err_close = close(file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", code);
		exit(100);
	}
	return (0);
}
