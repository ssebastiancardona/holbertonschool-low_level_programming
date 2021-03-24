#include "lists.h"
#include <stdio.h>
/**
 * print_list - imprime la lista
 * @h: inicio
 * Return: numero de nodos
 */
size_t print_list(const list_t *h)
{
	const list_t *tem;
	size_t nodes = 0;

	tem = h;
	while (tem != NULL)
	{
		printf("[%u] ", tem->len);
		if (!tem->str)
			printf("(nil)\n");
		else
			printf("%s\n", tem->str);
		tem = tem->next;
		nodes++;
	}
	return (nodes);
}
