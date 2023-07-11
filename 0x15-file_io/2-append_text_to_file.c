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
 * append_text_to_file - appends text to file
 * @filename: file's name
 * @text_content: text to be appended
 *
 * Return: 1 on success, -1 on failure
 *
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
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
