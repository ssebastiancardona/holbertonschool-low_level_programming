#include "holberton.h"
/**
 * _abs - imprime el valor absoluto
 * @n: chequea la variable
 *
 * Return: n
 */
int _abs(int n)
{
if (n >= 0)
return (n);
else
{
n *= -1;
return (n);
}
}
