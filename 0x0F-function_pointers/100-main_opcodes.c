#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print the opcodes of the program.
 * @a: Address of the main function.
 * @n: Number of bytes to print.
 *
 * Return: Void.
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf(" ");
		printf("%.2hhx", a[i]);
	}
	printf("\n");
}

/**
 * main - Prints its own opcodes.
 * @argc: Number of arguments passed to the function.
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		exit(2);
	}

	print_opcodes((char *)&main, n);
	return (0);
}
