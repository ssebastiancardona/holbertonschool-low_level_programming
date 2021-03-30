#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - encuentra el tamaño del string
 * @str: puntero al string
 *
 * Return: tamaño del string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - agrega un texto al final de un archivo.
 * @filename: nombre del archivo
 * @text_content: string terminado en NULL
 *
 * Return: 1 o 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fed;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fed = open(filename, O_WRONLY | O_APPEND);
	if (fed == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fed, text_content, _strlen(text_content));
	close(fed);
	if (len == -1)
		return (-1);
	return (1);
}
