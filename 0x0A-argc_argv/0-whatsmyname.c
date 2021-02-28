#include <stdio.h>
/**
 * main - imprime nuestro nombre seguido de una nueva linea
 * @argc: cuenta la cantidad de cadenas
 * @argv: cadenas que entran
 * Return: no retorna nadita
 */
int main(int argc, char *argv[])
{
if (argc == 1)
printf("%s\n", argv[0]);
else
{
argv[0] = argv[4];
printf("%s\n", argv[0]);
}
return (0);
}
