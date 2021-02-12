#include "holberton.h"
/**
 * print_line - imprime _ n veces
 * @n: numero de veces a imprimir _
 *
 * Return: no retorna nada
 */
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
