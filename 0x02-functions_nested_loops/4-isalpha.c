#include "holberton.h"
/**
 * _isalpha - Funcion que detecta si es letra mayuscula o minuscula
 *
 * @c: Caracter enviado a la funcion
 *
 * Return: retorna 1 o 0 dependiendo del caso
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
