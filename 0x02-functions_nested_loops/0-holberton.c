#include "holberton.h"
/**
 * main - Entra al programa principal
 *
 * Description: Imprime letra a letra con la funcion _putchar
 *
 * Return: Siempre retorna 0
 */
int main(void)
{
int i = 0;
char c;
char s[] = "Holberton\n";
while (i <= 9)
{
c = s[i];
_putchar(c);
i++;
}
return (0);
}
