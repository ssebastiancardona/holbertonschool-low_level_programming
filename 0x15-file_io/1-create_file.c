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
 * create_file - crea un archivo
 * @filename: nombre del arvhivo a crear
 * @text_content: Cadena terminada en NULL
 *
 * Return: 1 o 0
 */
int create_file(const char *filename, char *text_content)
{
	int fed;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fed = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fed == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fed, text_content, _strlen(text_content));
	close(fed);
	if (len == -1)
		return (-1);
	return (1);
}
