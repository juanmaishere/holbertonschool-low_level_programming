#include "main.h"
#define BUFFER_SIZE 4096
int main(int argc, char *argv[])
{	int writen, fd = 0, fd2 = 0;
	char *from, *to, bytes;
	char buffer[10020];

	from = argv[1];
	to = argv[2];

	if (argc != 3)
	{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit(97);
	}

	fd = open(from, O_RDONLY);
	fd2 = open(to, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd2 == -1)
	{
	chmod(argv[2], 664);
	}
	bytes = read(fd, buffer, BUFFER_SIZE);
	if (bytes == -1)
	{
	fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	writen = write(fd2, buffer, bytes);
	if (writen == -1)
	{
	fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	close(fd2);
	close(fd);
	if (close(fd) == -1)
	{
	exit(100); }
	if (close(fd2) == -1)
	{
	exit(100); }
return (writen);
}
