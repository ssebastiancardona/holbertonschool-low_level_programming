#include "holberton.h"
/**
 * _strchr - identifica el caracter
 *
 * @s: string a chequear
 * @c: char to check for
 * Return: retorna s + i
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (s + i);
i++;
}
if (s[i] == c)
return (s + i);
return ('\0');
}
