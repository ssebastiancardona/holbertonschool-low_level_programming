#include "holberton.h"
/**
 * _puts - imprime el string
 * @str: es el string a imprimir
 *
 * Return: nadita
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
