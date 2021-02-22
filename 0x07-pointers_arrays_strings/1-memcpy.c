#include "holberton.h"
/**
 * _memcpy - copia la locacion de la memoria de src a dest
 *
 *@dest: destino de la memoria
 *@src: variable de memoria
 *@n: numero de bytes
 *Return: retorna dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
i = 0;
while (i < (int)n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
