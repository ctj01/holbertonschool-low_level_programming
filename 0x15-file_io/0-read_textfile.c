#include "holberton.h"

/**
 *read_textfile - check the code for Holberton School students.
 *@filename: name of file
 *@letters : character of file
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fr, fw;
	char *buffer;

	if (filename)
	{
		buffer = malloc(sizeof(char) * letters);
		if (!buffer)
			return (0);
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
		fr = read(fd, buffer, letters);
		if (fr == -1)
			return (0);
		fw = write(STDOUT_FILENO, buffer, fr);

		if (fw == -1)
			return (0);

		free(buffer);
		close(fd);

		return (fw);

	}
	return (0);

}
