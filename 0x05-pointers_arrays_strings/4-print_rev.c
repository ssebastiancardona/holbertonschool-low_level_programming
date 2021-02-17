#include "holberton.h"
/**
 * print_rev - imprime el string en reversa
 * @s: string a imprimir
 *
 * Return: nadita
 */
void print_rev(char *s)
{
int i = 0;
while (*(s + i))
i++;
i = i - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
