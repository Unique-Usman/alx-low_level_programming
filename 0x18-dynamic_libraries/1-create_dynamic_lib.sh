#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
sudo cp libdynamic.so /usr/lib
sudo ldconfig
