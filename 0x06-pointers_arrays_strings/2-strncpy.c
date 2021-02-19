#include "holberton.h"
/**
 * _strncpy - copia n bytes de src a el string
 * @dest: string a copiar
 * @src: string
 * @n: tamaño del string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
