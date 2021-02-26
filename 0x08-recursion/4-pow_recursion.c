#include "holberton.h"
/**
 * _pow_recursion - retorna el valor de x elevado
 * @x: numero
 * @y: exponente
 *
 * Return: retorna x o y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
