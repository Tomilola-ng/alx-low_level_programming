#include "tomi.h"

/**
 * string_nconcat - Program concats two strings.
 * @s1: ptr to The string #1 to concat.
 * @s2: ptr to The string #2 to concat.
 * @n: int bytes to add from s2
 * Return: ptr with the address of the array created.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter, j, x, y;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	counter = 0;
	while (s1[counter] != '\0')
		counter++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	p = malloc(sizeof(char) * (counter + n + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < counter; x++)
		p[x] = s1[x];
	j = 0;
	for (y = x; y < (counter + n); y++)
	{
		p[y] = s2[j];
		j++;
	}
	p[y] = '\0';
	return (p);
}
