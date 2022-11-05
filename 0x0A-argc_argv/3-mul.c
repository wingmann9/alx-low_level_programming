#include "main.h"

/**
 * main - Multiplies two given numbers and prints error is numbers are
 *	more than two.
 * @argc: Argument count of the program.
 * @argv: Pointers array of the arguments.
 *
 * Return: EXIT_SUCCESS, otherwise EXIT_FAILURE.
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}
	exit(EXIT_SUCCESS);
}
