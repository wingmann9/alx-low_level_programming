#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * File - function_pointers.h
 * @name: Nmae to be printed.
 * @f: Pointer to a function that prints a name.
 *
 * Desc: Header file containing the functions prototype in the directory.
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
