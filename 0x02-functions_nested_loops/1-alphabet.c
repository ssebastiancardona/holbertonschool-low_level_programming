#include "holberton.h"
/**
 * print_alphabet: Entra al programa principal
 *
 * Description: Imprime el alfabeto usando _putchar
 *
 * Return: Nada
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
