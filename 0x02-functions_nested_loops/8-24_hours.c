#include "holberton.h"
/**
 * jack_bauer - minutos de esa porqueria de serie que me daño los simpsons
 *
 * Return: No retorna nada tal cual lo hacia ese serie tan pero tan mala
 */
void jack_bauer(void)
{
int h, m, m1, m2, h1, h2;
h = 0;
m = 0;
while (h <= 23)
{
h1 = h / 10;
h2 = h % 10;
while (m <= 59)
{
m1 = m / 10;
m2 = m % 10;
putchar('0' + h1);
putchar('0' + h2);
putchar(':');
putchar('0' + m1);
putchar('0' + m2);
putchar('\n');
m++;
}
m = 0;
h++;
}
}
