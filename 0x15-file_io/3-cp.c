#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - copies file_from file_to
 * POSIX STDOU
 * @filename: name of file
 * @letters: number of letters
 * Return: file_to
 * 0: if filename is null,not opened/read/write
 */
int main(int argc, char *argv[])
{
	int file1 = open(argv[1], O_RDONLY);
	int file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0700);
	char *buf[1024];
	int rd;
	if (argc != 3)
	{
		dprintf(3, "Usage: %s filename\n", argv[0]);
	}


	if (file1 == -1 || file2 == 1)
		return (0);

	rd = read(file1, buf, 1024);
	while (rd > 0)	
	{
		if (write(STDOUT_FILENO, buf, rd) != rd)
		{
			return (0);
		}
		if (rd == -1)
		{
			return (0);
		}
	}
	close(file2);
		close (file1);
		return (1);

}

