#include "holberton.h"
#include <stdio.h>
/**
 * palindrome_check - chequea si es palindromo
 *
 * @l: tamaño del string
 * @i: countador de palindromos
 * @s: string a chequear
 * Return: se llama a si misma hasta que se complete
 */
int palindrome_check(char *s, int l, int i)
{
if (s[i] == s[l] && l != i)
return (palindrome_check(s, --l, ++i));
if (s[i] == s[l] || i >= l)
return (1);
if (s[i] != s[l])
return (0);
return (1);
}
/**
 * recursive_strlen - con recurcion se chequea el string
 *
 * @s: string a chequear
 * @i: countador
 * Return: se llama a si misma si no esta completo
 */
int recursive_strlen(char *s, int i)
{
if (s[i] != '\0')
return (recursive_strlen(s, ++i));
return (--i);
}
/**
 * is_palindrome - determina si el numero adentro de un string
 * es palindromo o no
 *
 *
 * @s: string a chequear
 * Return: 1 o 0
 */
int is_palindrome(char *s)
{
int tamaño;
tamaño = recursive_strlen(s, 0);
return (palindrome_check(s, tamaño, 0));
}
