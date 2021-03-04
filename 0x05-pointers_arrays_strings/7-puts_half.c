#include "holberton.h"

/**
 * _strlen - retorna el tamaño
 *
 *
 * @s: string para sacar el tamaño
 * Return: retorna el tamaño del string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * puts_half - imprime la segunda mitad del string
 *
 * @str: string a imprimir
 * Return: nadita
 */
void puts_half(char *str)
{	int i;
	i = _strlen(str);
	if (i % 2 != 0)
		i++;
	i /= 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar(10);
}
