This directory is about C librabries, both staic and dynamic. Creating and manipulating both using ar, ranlib and nm.
A snippet of each file function is given below:

- libmy.a: C static library containing a given set of functions.
- create_static_lib,sh: bash script that  creates a static library called liball.a from all the .c files in the current directory.
- main.h: Header file containing the prototypes of all functions included in libmy.a.
