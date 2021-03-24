#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserta un nuevo nodo dada la posicion
 * @head: puntero doble al inicio del nodo en la lista
 * @idx: index del nodo a insertar
 * @n: valor del nuevo nodo
 *
 * Return: puntero al index del nodo
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *actual, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		actual = *head;
		for (i = 0; i < idx - 1 && actual != NULL; i++)
		{
			actual = actual->next;
		}
		if (actual == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = actual->next;
	actual->next = new;
	return (new);
}
