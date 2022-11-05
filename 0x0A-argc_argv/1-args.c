#include "main.h"

/**
 * main - Prints the argument count of the program.
 * @argc: Argument count to the program.
 * @argv: Pointers array of the arguments.
 *
 * Return: EXIT_SUCCESS.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", --argc);

	exit(EXIT_SUCCESS);
}
