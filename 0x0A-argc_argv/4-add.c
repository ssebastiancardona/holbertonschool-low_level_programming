#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * esnumero - chequea si es numero o que
 *
 * @esnumero: presunto numero
 * Return: 1 o 0
 */
int esnumero(char *number)
{
	int i;

	i = 0;
	while (number[i] != '\0')
	{
		if (isdigit(number[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - programa principal
 * @argv: argumentos
 * @argc: numeros de argumentos
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int resul, i;

	resul = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (isnumber(argv[i]))
		{
			resul += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", resul);
	return (0);
}
