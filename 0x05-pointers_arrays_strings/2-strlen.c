#include"holberton.h"
/**
 * _strlen - Retorna el tamaño de s
 * @s: variable para averiguar el tamaño
 *
 * Return: retorna la variable longitud
 */
int _strlen(char *s)
{
int l;
l = 0;
while (*s)
{
s++;
l++;
}
return (l);
}
