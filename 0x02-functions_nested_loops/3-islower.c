#include "holberton.h"
/**
 * _islower - Verifica si la letra ingresada es mayuscula o minuscula
 * @c: Es el caracter enviado a la funcion
 * Description: lo mismo de arriba XD
 *
 * Return: retorna 1 si es minuscula o 0 si es otra cosa
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
