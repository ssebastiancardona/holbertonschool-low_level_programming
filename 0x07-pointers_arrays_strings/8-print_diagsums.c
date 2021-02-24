#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - imprime dos diagonales
 *
 * @a: obtiene la matris
 * @size: tamaño de la matris
 * Return: no retorna nada
 */
void print_diagsums(int *a, int size)
{
int sum, sum2, i, max;
i = sum = sum2 = 0;
max = size * size;
while (i < max)
{
sum += a[i];
i = i + size + 1;
}
i = size - 1;
while (i < (max - 1))
{
sum2 += a[i];
i = i + (size - 1);
}
printf("%d, %d\n", sum, sum2);
}
