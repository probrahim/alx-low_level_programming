#include "main.h"

/**
 * create_file - creates a file
 * @filename: name  file to create
 * @text_content: text to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, x, y = 0;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(f, text_content, y);
		if (x != y)
			return (-1);
	}

	close(f);

	return (1);
}
