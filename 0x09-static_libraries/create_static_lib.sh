#!/bin/bash
gcc -c *.c  -Wall -Wextra -Werror
ar rc liball.a *.o
