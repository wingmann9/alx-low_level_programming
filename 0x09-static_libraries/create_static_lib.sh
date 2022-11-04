#!/bin/bash

CFILE=*.c
OFILE=*.o

gcc -c $CFILE
ar rc liball.a $OFILE
ranlib liball.a
