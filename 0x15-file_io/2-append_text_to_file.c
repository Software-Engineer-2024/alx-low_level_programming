#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file.
 * @text_content: added content.
 *
 * Return: 1 if the file exists.
 * -1 if the fails does not exist or if it failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int no_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (no_letters = 0; text_content[no_letters]; no_letters++)
			;

		rwr = write(fd, text_content, no_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
