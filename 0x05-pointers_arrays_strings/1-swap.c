#include "holberton.h"
/**
 * swap_int - esta funcion intercambia el valor a y b
 * @a: a pues es a
 * @b: y b pues es b
 *
 * Return: no retorna nada como 472
 */
void swap_int(int *a, int *b)
{
int e;
e = *a;
*a = *b;
*b = e;
}
