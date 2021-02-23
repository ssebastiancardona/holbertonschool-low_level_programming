#include "holberton.h"

/**
 * _strspn - gets the length of the prefix substring
 *
 * @s: string a chequear
 * @accept: substring a chequear
 * Return: retorna los numeros de bytes en s
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, valor, enc;
i = valor = enc = 0;
while (s[i] != '\0')
{
j = enc = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
valor++;
enc = 1;
break;
}
j++;
}
if (enc == 0)
return (valor);
i++;
}
return (valor);
}
