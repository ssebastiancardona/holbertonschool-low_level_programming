#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entra al programa principal
 *
 * Return: Retorna 0
 */
int main(void)
{
int i;
char l;
i = 48;
while  (i < 58)
{
putchar(i);
i++;
}
l = 'a';
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
