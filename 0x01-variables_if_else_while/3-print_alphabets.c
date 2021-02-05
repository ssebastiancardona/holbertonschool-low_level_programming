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
putchar(l);
l++;
}
l = 'A';
while (l <= 'Z')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
