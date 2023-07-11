#include "main.h"
#include <string.h>
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

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND, 664);
	if (fd == -1)
	{
	return (-1);
	}
	
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);

}
