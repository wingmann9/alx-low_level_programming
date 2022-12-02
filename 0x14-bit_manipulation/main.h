#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - Prints character to stdout.
 * @c: Character to be printed.
 *
 * Return: 1 (Success), otherwise -1 and errno set appropriately.
 *
 * Desc: Header file containing all function prototypes in the directory.
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* _MAIN_H_ */
