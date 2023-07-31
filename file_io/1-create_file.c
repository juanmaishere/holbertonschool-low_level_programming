#include "main.h"
int
create_file(const char *filename, char *text_content)
{
	int d;

	if (filename == NULL)
	{
	return (-1);
	}

	d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (d != -1)
	{
	write(d, text_content, strlen(text_content));
	close(d);
	}
	else
	{
	write(d, text_content, strlen(text_content));
	chmod(filename, 0600);
	close(d);
	}
return (1);
}
