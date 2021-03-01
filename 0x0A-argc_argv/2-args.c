#include <stdio.h>
/**
 * main - imprime todos los argumentos enviados
 * seguido de una nueva linea
 * @argv: argumentos
 * @argc: numero de argumentos
 * Return: nadita
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
	{
	printf("%s\n", *argv++);
	i++;
	}
return (0);
}
