#include "holberton.h"
/**
 * sqrt_helper - devuelve la raiz cuadrada
 *
 * @n: numero para sacarle la cuadrada XD
 * @c: contador para encontrar la raiz
 * Return: retorna el resultado
 */
int sqrt_helper(int n, int c)
{
int suma;
suma = c * c;
if (n - suma == 0)
return (c);
else if (n < suma)
return (-1);
return (sqrt_helper(n, ++c));
}
/**
 * _sqrt_recursion - devuelve -1 si no tiene raiz
 *
 *
 * @n: numero a raizificar jajaj
 * Return: retorna el resultado
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (sqrt_helper(n, 2));
}
