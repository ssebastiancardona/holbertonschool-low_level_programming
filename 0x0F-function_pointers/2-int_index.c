#include "function_pointers.h"

/**
 * int_index - busca un numero entero
 * @array: array para buscar
 * @size: tamaño del array
 * @cmp: funcion usada para comparar
 *
 * Return: un entero dependiendo del caso
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
