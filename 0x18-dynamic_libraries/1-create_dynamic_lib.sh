#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
