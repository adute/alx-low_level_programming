#include "main.h"
#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - creats file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 * -1: if failed to be created, written,
 *  filename | text_content(NULL)
 *  create permissions rw-------
 *  if file already exists dont change permissions , truncate it
 */
int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_CREAT | O_RDWR | O_TRUNC,
			600);
	size_t buf = (size_t)malloc(sizeof(text_content));
	int crt;

	if (filename == NULL || file == -1 ||
			text_content == NULL)
		return (-1);

	crt = write(STDOUT_FILENO, text_content, buf);
	if (crt == -1)
		return (-1);
	close(file);
	return (1);
}
