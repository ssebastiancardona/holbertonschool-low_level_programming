#include "holberton.h"
/**
 * print_last_digit - imprime el ultimo digito de una variable
 * @n: variable a modificar
 *
 * Return: l
 */
int print_last_digit(int n)
{
int l, p;
l = n % 10;
if (l <  0)
l = -l;
p = '0' + l;
_putchar(p);
return (l);
}
