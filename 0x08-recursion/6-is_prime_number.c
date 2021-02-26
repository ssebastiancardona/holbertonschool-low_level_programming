#include "holberton.h"
/**
 * prime_helper - devuelva 1 si el número entero
 * de entrada es un número primo
 * @n: number to check for primality
 * @c: contador para el numero
 * Return: retorna a sí mismo cuando no ha terminado
 * cuando finaliza devuelve 1
 */
int prime_helper(int n, int c)
{
if (n % c == 0)
return (0);
if (c > (n / 2))
return (1);
return (prime_helper(n, ++c));
}
/**
 * is_prime_number - determina si el numero es primo
 *
 * @n: numero pa chequear
 * Return: retorna 1 si es primo o 0 si es otro
 */
int is_prime_number(int n)
{
if (n <= 0)
return (0);
if (n % 2 == 0)
return (0);
if (n == 1)
return (0);
return (prime_helper(n, 3));
}
