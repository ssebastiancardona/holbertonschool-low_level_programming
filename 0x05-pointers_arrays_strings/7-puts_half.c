#include "holberton.h"
/**
 * puts_half - imprime la mitad de un string
 * @str: string a imprimir
 *
 * Return: no retorna nada
 */
void puts_half(char *str)
{
int i;
i = 0;
while (*(str + i))
{
i++;
}
if (i % 2 == 0)
{
i = i / 2;
while (i < 10)
{
putchar (*str + i);
i++;
}
}
}
