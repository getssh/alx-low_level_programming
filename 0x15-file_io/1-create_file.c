#include "main.h"
#include "holberton.h"
/**
  * create_file - create file and write to it
  * @filename: nameof the file to be created
  * @text_content: text to be writen to filename
  * Return: 1 on success or -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fil[3], len;
	char *buff;

	if (filename == NULL)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	len++;
	buff = malloc(sizeof(char) * len);
	if (buff == NULL)
	{
		free(buff);
		return (-1);
	}
	fil[0] = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fil[0] == -1)
	{
		free(buff);
		return (-1);
	}
	fil[1] = read(fil[0], buff, len);
	close(fil[0]);
	fil[0] = open(filename, O_RDWR);
	write(fil[0], text_content, len);
	if (fil[0] == -1)
	{
		free(buff);
		return (-1);
	}
	close(fil[0]);
	free(buff);
	return (1);
}
