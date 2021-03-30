#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - lee un archivo de texto y lo
 * imprime en la salida estándar POSIX
 * @filename: nombre del archivo a leer
 * @letters: número de letras que debe leer e imprimir
 *
 * Return: número real de letras que puede leer e imprimir
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fed;
	ssize_t lennr, lennw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fed = open(filename, O_RDONLY);
	if (fed == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fed);
		return (0);
	}
	lennr = read(fed, buffer, letters);
	close(fed);
	if (lennr == -1)
	{
		free(buffer);
		return (0);
	}
	lennw = write(STDOUT_FILENO, buffer, lennr);
	free(buffer);
	if (lennr != lennw)
		return (0);
	return (lennw);
}
