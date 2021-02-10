#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - imprime los numeros segun se los envien
 * @n: variable de entrada
 *
 * Return: No retorna nada
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%i, ", n);
if (n > 98)
n--;
else
n++;
}
printf("98\n");
}
