#include "main.h"

int
append_text_to_file(const char *filename, char *text_content)
{
int d;
unsigned long int c;

	if (filename == NULL)
	{
		return (-1);
	}

	d = open(filename, O_WRONLY | O_APPEND);

	if (d == -1)
		return (-1);

	if (text_content == NULL)
	{
	close(d);
	}
	else
	{
	c = write(d, text_content, strlen(text_content));

	if (c != strlen(text_content))
		return (-1);

	close(d);
	}

return (1);
}
