#include <stdio.h>

void printsd(void) __attribute__((constructor));

/**
 * printsd - Function that runs before main
*/

void printsd(void)
{
  printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
