#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - imprimidor de numeros XD
 * @separator: la coma con el espacio
 * @n: numero de parametros a imprimir
 *
 * Return: nadita
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list parametros;

	va_start(parametros, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(parametros, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(parametros);
}
