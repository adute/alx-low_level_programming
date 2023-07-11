#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints
 * it to POSIX standard output
 * @letters: number of letters to be read and print
 * @filename: text file to be read
 * Return: actual number of letters it could read and print
 * if file can't be opened or read return 0
 * if filename is NULL return 0;
 * if write fails of doesn't write
 * the expected amount of bytes return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, p;
	char *buf = (char *)malloc(letters * sizeof(char));

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}

	p = write(1, buf, read(fd, buf, letters));

	if (p == -1 || read(fd, buf, letters) == -1)
	{
		return (0);
	}
	close(fd);
	return (p);
}
