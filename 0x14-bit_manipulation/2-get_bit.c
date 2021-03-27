#include "holberton.h"
/**
 * get_bit - devuelve el valor de un bit en un índice dado
 * @n: número para registrar bits
 * @index: índice en el que comprobar el bit
 *
 * Return: valor del bit, o -1 si hay un error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div;
	unsigned long int check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
