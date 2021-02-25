#include "holberton.h"
/**
 * _puts_recursion - funcion que se llama a simisma para imprimir
 *
 *
 * @s: string que se imprime
 * Return: no retorna nada
 */
void _puts_recursion(char *s)
{
if (s[0] != '\0')
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
else
{
_putchar(10);
}
}
