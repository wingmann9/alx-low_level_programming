#include <stdio.h>
#include "main.h"

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 (Success), otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
