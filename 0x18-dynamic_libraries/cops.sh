#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c operations.c
gcc -shared -o 100-operations.so operations.o
