#!/bin/bash
gcc -Wall -Wextar -Werror -pedantic -c -fPTC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
