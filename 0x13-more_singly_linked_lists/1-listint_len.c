#include "lists.h"
/**
 * listint_len - retorna el numero de elementos en una lista
 * @h: puntero a la lista
 *
 * Return: retorna el numero de elementos en una lista
 */
size_t listint_len(const listint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		contador++;
		h = h->next;
	}
	return (contador);
}
