#include "holberton.h"
/**
 * _strcmp - compara dos strings
 * @s1: primer string
 * @s2: segundo string
 * Return: la resta de los primeros bytes
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
i++;
return (*(s1 + i)-*(s2 + i));
}
