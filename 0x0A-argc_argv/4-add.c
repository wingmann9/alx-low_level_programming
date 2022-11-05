#include "main.h"

/**
 * main - Adds positive integers.
 * @argc: Argument count of the program.
 * @argv: Array of pointers of the arguments.
 *
 * Return: EXIT_FAILURE if argument is not an integer;
 *		otherwise EXIT_SUCCESS.
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}

		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}
