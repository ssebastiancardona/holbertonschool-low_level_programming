#include "holberton.h"

/**
 * puts2 - imprime caracter a caracter
 * @str: string a imprimir
 *
 * Return: nadita
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
