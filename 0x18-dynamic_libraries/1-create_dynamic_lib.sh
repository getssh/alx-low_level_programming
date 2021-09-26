#!/bin/bash
gcc -g -fPIC -c *.c
gcc -shared -o liball.so *.o
