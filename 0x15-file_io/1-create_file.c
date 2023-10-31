#include <string.h>
#include "main.h"

/**
 * create_file - A Program
 * @filename: ptr code
 * @text_content: variable number
 * Return: number
 */

int create_file(const char *filename, char *text_content)
{
	int file_db, wrte_cb;

	if (filename == NULL)
	{
		return (-1);
	}

	file_db = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Something Here too*/
	if (file_db == -1)
	{
		return (-1);
	}

	/* Something Here */
	if (text_content != NULL)
	{
		wrte_cb = write(file_db, text_content, strlen(text_content));
		if (wrte_cb == -1)
		{
			return (-1);
		}
	}
	close(file_db);
	return (1);
}
