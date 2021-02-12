#include "holberton.h"
/**
 * print_square - imprime puros # formando un cuadro
 * @size: tamaño del cuadro de #
 *
 * Return: no retorna nada
 */
void print_square(int size)
{
int a, b;
if (size <= 0)
_putchar('\n');
for (a = 0; a < size; a++)
{
for (b = 0; b < (size); b++)
{
_putchar('#');
}
_putchar('\n');
}
}
