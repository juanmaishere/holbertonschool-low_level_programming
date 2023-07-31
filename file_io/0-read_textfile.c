#include "main.h"

ssize_t
read_textfile(const char *filename, size_t letters)
{
	int d = 0, t = 0;
	char buffer[10400];

	if (filename == NULL)
	{
	return (0);
	}

	d = open(filename, O_RDONLY);

	if (d == -1)
		return (0);

	t = read(d, buffer, letters);

	if (t == -1)
		return (0);

	write(STDOUT_FILENO, buffer, t);

	close(d);

return (t);
}
