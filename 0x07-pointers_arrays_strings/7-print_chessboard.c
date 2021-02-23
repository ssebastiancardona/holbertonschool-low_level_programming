#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: chessboard value
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
i = 0;
j = 0;
while (i != 7 || j != 7)
{
_putchar(a[i][j]);
if (j == 7)
{
_putchar('\n');
j = 0;
i++;
}
else
j++;
}
_putchar(a[i][j]);
_putchar(10);
}
