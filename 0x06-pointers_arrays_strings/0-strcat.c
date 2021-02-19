#include "holberton.h"
/**
 * _strcat - funcion que concatena dos strings
 * @dest: string
 * @src: string
 *
 * Return: retorna string concatenado
 */
char *_strcat(char *dest, char *src)
{
int longitud;
int j;
longitud = 0;
j = 0;
while (dest[longitud] != '\0')
{
longitud++;
}
for ( ; src[j] != '\0'; j++)
{
dest[longitud] = src[j];
longitud++;
}
dest[longitud + j] = '\0';
return (dest);
}
