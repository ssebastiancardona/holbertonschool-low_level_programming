#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  imprime toda la lista
 * @h: lista a imprimir
 *
 * Return: numero de elementos
 */
size_t print_listint(const listint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		contador++;
	}
	return (contador);
}
