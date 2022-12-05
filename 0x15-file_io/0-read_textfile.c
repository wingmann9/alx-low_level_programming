#include <stdio.h>
#include "main.h"

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - Wtites a text file and print it to POSIX stdout.
 * @filename: Name of the text file.
 * @letters: Number of letters to be read and printed.
 *
 * Return: Actual number of letters, read and printed, otherwise 0, if:
 *		file cannot be open or read.
 *		filename is NULL.
 *		write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (filename == NULL || fd == -1)
	{
		return (0);
	}

	if (buf == NULL || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (wr);
}
