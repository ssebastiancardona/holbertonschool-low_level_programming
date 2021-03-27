#include "holberton.h"

/**
 * calculador - calcula (base ^ power)
 * @base: base del exponente
 * @power: exponente
 *
 * Return: value of (base ^ power)
 */
unsigned long int calculador(unsigned int base, unsigned int power)
{
	unsigned long int numero;
	unsigned int i;

	numero = 1;
	for (i = 1; i <= power; i++)
		numero *= base;
	return (numero);
}

/**
 * print_binary - imprime en binario
 * @n: numero a imprimir
 *
 * Return: nada
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, chec;
	char flag;

	flag = 0;
	div = calculador(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		chec = n & div;
		if (chec == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
