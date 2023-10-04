#include "main.h"

/**
 * *_strdup - Program that duplicates string
 * @str: input string to duplicate
 * Return: NULL!!
*/

char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	/* sizes :)€¥$x*/
	while (str[l] != '\0')
		l++;

	s = malloc((l + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
