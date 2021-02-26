#include "holberton.h"

/**
 * factorial - obtiene el factorial de un numero
 *
 *
 * @n: numero para obtener el factorial
 * Return: Retorna el factorial de n
 */
int factorial(int n)
{
int fact;
fact = 0;
if (n < 0)
return (-1);
if (n == 0)
return (1);
if (n == 1)
return (1);
fact = n * factorial(n - 1);
return (fact);
}
