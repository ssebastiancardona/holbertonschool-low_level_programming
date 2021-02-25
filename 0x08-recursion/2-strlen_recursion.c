#include "holberton.h"
/**
 * _strlen_recursion - obtiene el tamaño de un string
 *
 *
 * @s: string pa saber el string
 * Return: retorna el tamaño del string
 */
int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (_strlen_recursion(++s) + 1);
return (0);
}
