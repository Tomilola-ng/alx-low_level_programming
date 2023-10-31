#include "main.h"

/**
 * append_text_to_file- A program
 * @filename: ptr address
 * @text_content: variable number count
 * Return: default numbers
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_db, write_cb;

	if (filename == NULL)
	{
		return (-1);
	}

	file_db = open(filename, O_WRONLY | O_APPEND);
	/* Something hre */

	if (file_db == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		/* Something hre */
		write_cb = write(file_db, text_content, strlen(text_content));
		if (write_cb == -1)
			return (-1);
	}
	close(file_db);
	return (1);
}
