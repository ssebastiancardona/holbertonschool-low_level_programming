#include <stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - suma todos los parametros
 * @n: numeros de parametros
 *
 * Return: la suma de todos los parametros
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int s = 0;
va_list parametros;
va_start(parametros, n);
for (i = 0; i < n; i++)
s += va_arg(parametros, int);
va_end(parametros);
return (s);
}
