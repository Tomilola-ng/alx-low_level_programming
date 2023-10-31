#include "main.h"

/**
 * read_textfile - A C Program
 * @filename: A Variable
 * @letters: another variable
 * Return: An integer value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_de;
	int i, y;
	char *bufffer;

	if (!filename)
	{
		/* Return Imediately **/
		return (0);
	}

	file_de = open(filename, O_RDONLY);
	/** Another Return */
	if (file_de < 0)
		return (0);
	bufffer = malloc(sizeof(char) * letters);
	if (!bufffer)
	{
		return (0);
	}

	i = read(file_de, bufffer, letters);
	if (i < 0)
	{
		free(bufffer);
		return (0);
	}
	bufffer[i] = '\0';
	close(file_de);
	y = write(STDOUT_FILENO, bufffer, i);
	if (y < 0)
	{
		free(bufffer);
		return (0);
	}
	free(bufffer);
	return (y);
}
