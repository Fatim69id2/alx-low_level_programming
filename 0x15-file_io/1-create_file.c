#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file to create
 * @text_content: Content writed in the file
 * Return: 1 if it success. -1 if it fails
*/

int create_file(const char *filename, char *text_content)
{
	int x, y, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, i);

	if (x == -1 || y == -1)
	{
		return (-1);
	}

	close(x);

	return (1);
}
