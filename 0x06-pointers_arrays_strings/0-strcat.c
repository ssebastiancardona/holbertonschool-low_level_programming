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
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
