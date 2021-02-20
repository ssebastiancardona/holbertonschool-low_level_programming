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
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (n >= 1 && src[j] != '\0')
{
dest[i + j] = src[j];
j++;
n--;
}
return (dest);
}
