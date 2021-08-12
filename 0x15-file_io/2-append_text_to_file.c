#include "main.h"
#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end file
 *
 * Return: 1 on success | text_content is NULL and file exists
 * -1: if failed to be appended, no filname and no text_content
 *  filename doesn't exist dont create
 *  create permissions rw-------
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_APPEND);
	size_t buf = (size_t)malloc(sizeof(text_content));
	int apnd;

	if ((filename == NULL && text_content == NULL)
			|| file == -1)
		return (-1);

	apnd = write(STDOUT_FILENO, text_content, buf);
	if (apnd == -1)
		return (-1);

	close(file);
	return (1);
}
