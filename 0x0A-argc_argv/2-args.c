#include "main.h"

/**
 * main - Prints all the arguments passed to the program.
 * @argc: Argument count of the program.
 * @argv: Pointers array of the arguments.
 *
 * Return: EXIT_SUCCESS.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	exit(EXIT_SUCCESS);
}
