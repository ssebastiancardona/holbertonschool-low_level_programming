#include "holberton.h"
/**
 * print_diagonal - imprime una linea diagonal
 * @n: tamaño de la linea
 *
 * Return: no retorna nada
 */
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
_putchar('\n');
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
