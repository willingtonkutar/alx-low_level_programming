#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_result, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			continue;

		write_result = write(fd, text_content, i);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
