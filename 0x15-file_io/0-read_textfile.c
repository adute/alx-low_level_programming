#include "main.h"
#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads text file and prints it to
 * POSIX STDOU
 * @filename: name of file
 * @letters: number of letters
 * Return: number of letters
 * 0: if filename is null,not opened/read/write
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters);
	ssize_t rd, cnt;

	if (filename == NULL || file == -1)
		return (0);

	rd = read(file, buf, letters);
	cnt = write(STDOUT_FILENO, buf, rd);
	if (rd == -1 || cnt == -1 || rd != cnt)
		return (0);
	close(file);
	return (cnt);
}

