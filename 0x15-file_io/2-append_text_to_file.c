#include "holberton.h"

/**
 *append_text_to_file - check the code for Holberton School students.
 *@filename: name of file
 *@text_content : character of file
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
