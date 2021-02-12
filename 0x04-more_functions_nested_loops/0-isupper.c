#include "holberton.h"
/**
 * _isupper - funcion que revisa si es mayuscula
 * @c: caracter a hequiar 
 *
 * Return: 1 o 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
