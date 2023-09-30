#include <stdio.h>
#include "main.h"

int str_checker(char *s1, char *s2, int i, int j)

/**
 * wildcmp - Program that checks for identical strings
 * @str1: pointer address for string.
 * @str2: pointer address for string.
 * Return: 1 if are considered identical.
 */

int wildcmp(char *str1, char *str2)
{
	return (str_checker(str1, str2, 0, 0));
}

/**
 * str_checker - Program that checks for identical strings
 * @s1: pointer to string_1 base address.
 * @s2: pointer to string_2 base address.
 * @i: var left index.
 * @j: var special index. (joker)
 * Return: 1 if it is similar, 0 otherwise.
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
  
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
  
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
  
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
  
	return (0);
}
