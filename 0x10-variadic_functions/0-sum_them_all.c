#include <stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - suma los argumentos enviados
 *
 * @n: numero de argumentos
 * return: retorna la suma
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j, s;
i = 0;
s = 0;
j = 0;
va_list parametros;
va_start(parametros, n);
	for (; i < n; i++)
	{
		s = va_arg(parametros, int);
		j += s;
	}
	va_end(parametros);
	return (j);
}
