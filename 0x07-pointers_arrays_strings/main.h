#ifndef MAIN_H
#define MAIN_H

/* Imported Standard Input and Output to avoid repetitions */
#include <stdio.h>

/* ALX mandatory import */
int _putchar(char c);

/* Function Declaration and Prototypes */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void print_chessboard(char (*a)[8]);
char *_strpbrk(char *s, char *accept);

#endif /* MAIN_H */

