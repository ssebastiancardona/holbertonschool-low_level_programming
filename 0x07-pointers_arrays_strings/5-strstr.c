#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - localiza el substring dento del string
 *
 * @haystack: string a buscar
 * @needle: substring
 * Return: retorna un puntero a la locacion del substring
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, start;
i = j = 0;
while (haystack[i] != '\0')
{
start = i;
j = 0;
while (haystack[i] == needle[j] &&
needle[j] != '\0' && haystack[i] != '\0')
{
i++;
j++;
}
if (needle[j] == '\0')
return (haystack + start);
i = start + 1;
}
return (NULL);
}
