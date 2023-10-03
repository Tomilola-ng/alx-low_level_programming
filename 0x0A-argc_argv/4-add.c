#include <stdlib.h>
#include <stdio.h>

/**
 * isInteger - Program that checks if s is an int
 * @str: string to check
 * Return: 0 or 1 Success or error
 */

int isInteger(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}


/**
 * main - Program that adds positive num
 * @argc: Argument Counter
 * @argv: Argument Variable
 * Return: 0 or 1, Success or Error
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);

	return (0);
}
