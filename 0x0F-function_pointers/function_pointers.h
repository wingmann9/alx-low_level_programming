#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * _putchar - Prints the character c to stdout.
 * @c: Character to be printed using _putchar function.
 * Return: Printed character.
 *
 * Desc: Header file containing the functions prototype in the directory.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
