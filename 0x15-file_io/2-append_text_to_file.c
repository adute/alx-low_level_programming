#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to file
 * @filename: name of file to create
 * @text_content: string to be append to the file
 * Return: 1 on SUCCESS
 * -1 on failure
 *  the created file must have rw------- permisions
 *  Do not create the file if it does not exist
 *  if file name is NULL return -1
 *  if text_content is Null create empty file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;

	fd = open(filename, O_APPEND, mode);
	if (fd == -1 || filename == NULL)
	{
	return (-1);
	}
	else
	{
	write(fd, text_content, sizeof(text_content) - 1);
	close(fd);
	}
	return (1);

}
