#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 file exists -1  not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int pdeplus;
	int env;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (pdeplus = 0; text_content[pdeplus]; pdeplus++)
			;

		env = write(f, text_content, pdeplus);

		if (env == -1)
			return (-1);
	}

	close(f);

	return (1);
}
