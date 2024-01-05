#include "main.h"

/**
 * read_textfile - Reads a text file and prints in STDO
 * @filename: Pointer
 * @letters: Number of letters
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t op, re, wr;
	char *psd;

	if (filename == NULL)
	{
		return (0);
	}

	psd = malloc(sizeof(char) * letters);

	if (psd == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);
	re = read(op, psd, letters);
	wr = write(STDOUT_FILENO, psd, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(psd);
		return (0);
	}
	free(psd);
	close(op);

	return (wr);
}

