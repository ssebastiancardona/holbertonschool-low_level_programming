#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - esculca el string como mi ex el celular
 *
 * @s: string a esculcar
 * @accept: los bytes aceptables
 * Return: retorna un puntero a s donde haga match
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
i = j = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
return (s + i);
j++;
}
i++;
}
return (NULL);
}
