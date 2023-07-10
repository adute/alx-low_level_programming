#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates file
 * @filename: name of file to create
 * @text_content: string to be written to the file
 * Return: 1 on SUCCESS
 * -1 on failure
 *  the created file must have rw------- permisions
 *  if file exists , truncate it and dont change permissions
 *  if file name is NULL return -1
 *  if text_content is Null create empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, mode);
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
