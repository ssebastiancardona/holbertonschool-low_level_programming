#include "holberton.h"
/**
 * _isdigit - chequea si es un digito
 * @c: caracter a chequear
 *
 * Return: retorna 0 o 1
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
