#include <stdio.h>
/**
 * main - imprime la cantidad de argumentos enviados
 * @argv: argumentos
 * @argc: numero de argumentos
 * Return: nadita ps cero
 *
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
