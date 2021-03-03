#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * _strlen - retorna el tamaño del string
 *
 * @s: string para chequear el tamaño
 * Return: retorna el tamaño del string
 */
int _strlen(char *s)
{	int i;
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copia un string entero al buffer
 *
 *
 * @src: string a copiar
 * @dest: buffer a copiar el strin
 * Return: retorna un puntero a la copia del string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *ret;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	ret = dest;

	return (ret);
}

/**
 * str_concat - concatena dos strings a uno nuevo
 *
 * @s1: primer string
 * @s2: segundo string
 * Return: retorna un puntero al string completo
 */
char *str_concat(char *s1, char *s2)
{
	char *nuevo;
	int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);
	nuevo = malloc(size);
	if (nuevo == NULL)
		return (NULL);
	_strcpy(nuevo, s1);
	i = _strlen(s1);
	for (i = _strlen(s1), j = 0; i != size && s2[j] != '\0'; i++, j++)
		nuevo[i] = s2[j];
	nuevo[i] = '\0';
	return (nuevo);
}
