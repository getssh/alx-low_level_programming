#include "main.h"
#include "holberton.h"
/**
  * append_text_to_file - append steing at the end
  * @filename: name of the file
  * @text_content: content
  * Return: 1 success 2- fal_
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fil[3], len;

	if (filename == NULL)
		return (-1);
	fil[0] = open(filename, O_WRONLY, O_APPEND);
	if (fil[0] == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			len++;
		fil[1] = write(fil[0], text_content, len);
		if (fil[1] == -1)
			return (-1);
	}
	close(fil[0]);
	return (1);
}
