#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file to create
 * @text_content: string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;

		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
