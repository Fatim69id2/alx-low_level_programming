#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to text in a file
 * @letters: Number of letters
 * Return: The actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t n, y;
	char *b;

	if (!filename)
	{
		return (0);
	}

	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		return (0);
	}

	b = malloc(sizeof(char) * (letters));
	if (!b)
	{
		return (0);
	}

	n = read(x, b, letters);
	y = write(STDOUT_FILENO, b, n);

	close(x);

	free(b);

	return (y);
}
