#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - Prints a character to stdout.
 * @c: Character to be printed.
 *
 * Return: 1 (Success), otherwise -1 with errno set appropriately.
 * Desc: Header file containing all functions prototypes in the directory.
 */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _MAIN_H_ */
