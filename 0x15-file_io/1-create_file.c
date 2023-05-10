#include "main.h"

/**
 * create_file - Creates a file
 * @filename: a pointer to the name of the file that will be created
 * @text_content: a poiter to string that will be printed in the file
 *
 * Return: 1 (success) and -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);

}
