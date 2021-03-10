#include "function_pointers.h"

/**
 * print_name - imprime webonadas
 * @name: trae el nombre que se va a imprimir
 * @f: se carga con el nombre a imprimir
 *
 * Return: nadita
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
