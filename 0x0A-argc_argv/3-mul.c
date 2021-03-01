#include <stdio.h>
#include <stdlib.h>

/**
 * main - imprime el resultado de la
 * multiplicacion de dos argumentos
 * @argv: argumentos
 * @argc: numero de argumentos
 * Return: 1 si hay error
 */
int main(int argc, char *argv[])
{
	int results;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	results = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", results);
	return (0);
}
