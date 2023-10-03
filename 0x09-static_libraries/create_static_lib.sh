#!/bin/bash

#First is  to compile
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

#Next is to archive
ar -rc liball.a *.o

#We need to index
ranlib liball.a

