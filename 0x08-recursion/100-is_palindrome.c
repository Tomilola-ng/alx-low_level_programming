#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Program that calcs the length of a string
 * @str: string to be used
 * Return: length of the string
 */

int _strlen_recursion(char *str)
{
	int sum = 0;

	if (*str != '\0')
	{
		sum++;
		sum += _strlen_recursion(str + 1);
	}
	return (sum);
}

/**
 * check - SubProgam for checking Palindrome
 * @str: pointer string to be checked
 * @start: start index
 * @end: end index
 * @flag: flag to indicate if a string is a palindrome
 * Return: void
 */

void check(char *str, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (str[start] == str[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(str, start + 1, end - 1, flag);
	}
}

/**
 * is_palindrome - Program that checks for palindrome
 * @str: string to be checked
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *str)
{
	int flag = 1;

	check(str, 0, _strlen_recursion(str) - 1, &flag);
	return (flag);
}
