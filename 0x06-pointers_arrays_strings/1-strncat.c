#include "holberton.h"
/**
 * _strncat - concatena dos strings
 * @dest: string a concatenar
 * @src: string
 * @n: tamaño
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while (j < n && *(src + j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
if (j < n)
*(dest + i) = *(src + j);
return (dest);
}
