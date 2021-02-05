#include <stdio.h>
/**
 * main - Entra al programa principal
 *
 * Return: Retorna 0
 */
int main(void)
{
char l;
l = 'a';
while (l <= 'z')
{
if ((l != 'e') && (l != 'q'))
{
putchar(l);
l++;
}
else
{
l++;
}
}
putchar('\n');
return (0);
}
