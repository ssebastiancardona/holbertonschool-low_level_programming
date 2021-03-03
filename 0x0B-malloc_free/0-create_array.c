#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - crea un array de char y lo inicializa con un char espesifico
 * @size: tamaño del array a crear
 * @c: char para inicializar el array
 *
 * Return: Un puntero a un array o Null si malloc falla
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
		
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
		
	}
	return (a);
	
}
