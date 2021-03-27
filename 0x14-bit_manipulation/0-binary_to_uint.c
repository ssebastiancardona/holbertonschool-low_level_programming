#include "holberton.h"
/**
 * binary_to_uint - convierte binario a entero
 * @b: puntero a un string que contiene el binario
 *
 * Return: devuelve un entero con valor decimal
 * del número binario, o 0 si hay error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int numero;

	numero = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		numero <<= 1;
		if (b[i] == '1')
			numero += 1;
	}
	return (numero);
}
