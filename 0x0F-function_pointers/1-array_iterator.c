#include "function_pointers.h"
/**
 * array_iterator - imprime parametro a parametro
 * @array: array a imprimir
 * @size: tamaño del array
 * @action: puntero a la funcion a usar
 *
 * Return: nada
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
