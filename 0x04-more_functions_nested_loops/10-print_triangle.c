#include "holberton.h"
/**
 * print_triangle - imprime un triangulo
 * @size: tamaño del triangulo
 *
 * Return: no retorna nada
 */
void print_triangle(int size)
{
int a, b;
if (size <= 0)
_putchar('\n');
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= (size - a))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
