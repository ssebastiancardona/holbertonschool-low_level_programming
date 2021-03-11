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
unsigned int i;

int s = 0;
va_list parametros;
va_start(parametros, n);
for (i = 0; i < n; i++)
s += va_arg(parametros, int);
va_end(parametros);
return (s);
}
