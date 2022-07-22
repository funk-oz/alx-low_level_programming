#!/bin/bash
gcc -c *.c
ar rc libball.o *.o
ranlib libball.a
