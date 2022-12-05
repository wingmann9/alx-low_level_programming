#include <stdio.h>
#include "main.h"

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Creates a file.
 * @filename: Name of file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 (Success), otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL || fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	write(fd, text_content, i);
	close(fd);
	return (1);
}
