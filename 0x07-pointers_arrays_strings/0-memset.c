#include "holberton.h"
/**
 * _memset - llena la memoria con un byte
 * @s: espacio de la memoria
 * @b: byte a llenar
 * @n: numero de espacios
 *
 * Return: puntero s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
