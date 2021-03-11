#include "holberton.h"

/**
 * _strcpy - copia un string al puntero
 * @src: variable destino
 * @dest: destino de la copia
 *
 * Return: un puntero
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
