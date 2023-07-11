#include "main.h"
/**
 * _strlen - counts string length
 * @str: string to be counted
 *
 * Return: string length
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str)
		str++, i++;
	return (i);
}
/**
 * create_file - creates file
 * @filename: file's name
 * @text_content: text to be written
 *
 * Return: 1 on success, -1 on failure
 *
*/
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename || fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);

	close(fd);
	if (bytes == len)
		return (1);
	return (-1);
}
