#include "holberton.h"
/**
 * print_alphabet - Entra al programa
 *
 * Description: Imprime el alfabeto con _putchar
 *
 * Return: No retorna nada
 */
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
