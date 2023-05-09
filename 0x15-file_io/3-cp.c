#include "main.h"

/**
 * exit97 - ...
 * @argc: ...
 *
 * Return: void
 */
void exit97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * exit98 - ...
 * @check: ...
 * @file: ...
 * @fd_from: ...
 * @fd_to: ...
 *
 * Return: void
 */
void exit98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * exit99 - ...
 * @check: ...
 * @file: ...
 * @fd_from: ...
 * @fd_to: ...
 *
 * Return: void
 */
void exit99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * exit100 - ...
 * @check: ...
 * @fd: ...
 *
 * Return: void
 */
void exit100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - cp clone
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 on success or -1 if faild
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	char buffer[1024];
	ssize_t lr, lw;
	mode_t file_perm;

	exit97(argc);
	fd_from = open(argv[1], O_RDONLY);
	exit98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	exit99((ssize_t)fd_to, argv[2], fd_from, -1);
	lr = 1;
	while (lr == 1)
	{
		lr = read(fd_from, buffer, 1024);
		exit98(lr, argv[1], fd_from, fd_to);
		lw = write(fd_to, buffer, lr);
		if (lw != lr)
			lw = -1;
		exit99(lw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	exit100(close_to, fd_to);
	exit100(close_from, fd_from);
	return (0);
}
