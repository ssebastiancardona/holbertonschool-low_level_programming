#include "holberton.h"
/**
 * print_alphabet_x10 - Entra al programa principal
 *
 * Description: Imprime 10 veces el alfabeto
 *
 * Return: No retorna nada
 */
void print_alphabet_x10(void);
{
int i = 1;
char a = 'a';
while (i <= 10)
{
while (a <= 'z')
{
putchar(a);
a++;
}
putchar('\n');
i++;
a = 'a';
}
}
