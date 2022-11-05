#include "main.h"

/**
 * main - Prints the program name.
 * @argc: Arguments count supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: EXIT_SUCCESS.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
