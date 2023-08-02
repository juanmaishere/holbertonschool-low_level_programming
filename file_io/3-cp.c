#include "main.h"
#define BUFFER_SIZE 14000
int
main(int argc, char *argv[])
{	int writen, fd = 0, fd2 = 0;
	ssize_t bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY);
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (fd2 == -1)
	{
	fd2 = open(argv[2], O_WRONLY | O_CREAT);
	chmod(argv[2], 0644);
	}
	else
	{
	fd2 = open(argv[2], O_WRONLY | O_TRUNC);
	}
	if (fd == -1)
	{
	printf("Error: Can't read from file %s\n", argv[1]);
	close(fd);
	close(fd2);
	exit(98); }

	writen = write(fd2, buffer, bytes);

	if (writen == -1)
	{
	fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
	close(fd);
	close(fd2);
	exit(99); }

	if (close(fd) == -1)
	{
	fprintf(stderr, "Error: Can't close fd\n");
	exit(100);
	}
	if (close(fd2) == -1)
	{
	fprintf(stderr, "Error: Can't close fd\n");
	exit(100);
	}
close(fd);
close(fd2);
return (0);
}
