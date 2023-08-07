#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Filename
 * @text_content: Added content
 * Return: 1 on success, -1 on failure
 * or if it fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, i;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_APPEND | O_RDWR, 0664);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		w = write(f, text_content, i);
		if (w == -1)
		{
			return (-1);
		}
	}
	close(f);
	return (1);
}
