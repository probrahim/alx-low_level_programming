#!/bin/bash
gcc -c *.c
ac -rb liball.a *.o
ranlib liball.a
