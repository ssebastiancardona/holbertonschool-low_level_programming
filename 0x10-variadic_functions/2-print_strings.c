#include<stdarg.h>
#include<stdio.h>

/**
 * print_strings - imprime un string seguido de una nueva linea
 * @separator: separador a imprimir entre los strings
 * @n: numero de strings
 *
 * Return: nadita
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list parametros;
va_start(parametros, n);
for (i = 0; i < n; i++)
{
	s = va_arg(parametros, char *);
	if (s == NULL)
	{
		printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	else
	{
		printf("%s", s);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
}
printf("\n");
va_end(parametros);
}
