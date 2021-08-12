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
 * @argc: name of file
 * @argv: number of letters
 * Return: file_to
 * 0: if filename is null,not opened/read/write
 */
int main(int argc, char *argv[])
{
	int file1 = open(argv[1], O_RDONLY);
	int file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 644);
	char *buf[1024];
	int rd, wrt, c1, c2;

	if (argc != 3)
	{
		dprintf(2, "Usage: %scp file_from file_to \n", argv[0]);
		exit(97);
	}
	rd = read(file1, buf, 1024);
	if (file1 == -1 || rd == -1)
	{
		dprintf(2, "Error: %sCan't read from file NAME_OF_THE_FILE", argv[1]);
		exit(98);
	}
	wrt = write(STDOUT_FILENO, buf, rd);
	if (file2 == -1 || wrt == -1)
	{
		dprintf(2, "Error: %sCan't write to NAME_OF_THE_FILE\n", argv[2]);
		exit(99);
	}
	c1 = close(file1);
	c2 = close(file2);
	if (c1 == -1 || c2 == -1)
	{
		dprintf(2, "Error: %sCan't close fd FD_VALUE \n", argv[0]);
		exit(100);
	}
	return (0);
}

