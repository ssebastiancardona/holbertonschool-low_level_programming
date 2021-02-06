#include <stdio.h>
/**
 * main - Entra al programa principal
 *
 * Return: Retorna 0
 */
int main(void)
{
char l;
l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
