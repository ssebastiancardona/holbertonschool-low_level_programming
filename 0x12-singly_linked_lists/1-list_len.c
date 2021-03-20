#include "lists.h"
/**
 * list_len - Obtiene el numero de nodos de la lista
 * @h: inicio de la lista
 *
 * Return: numero de nodos size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *tem;
	size_t nodes = 0;

	tem = h;
	while (tem != NULL)
	{
		tem = tem->next;
		nodes++;
	}
	return (nodes);
}
