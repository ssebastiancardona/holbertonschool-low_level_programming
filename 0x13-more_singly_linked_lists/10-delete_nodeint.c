#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - borra un nodo del index
 *
 * @head: puntero doble al inicio de la lista
 * @index: index del nodo borrado
 *
 * Return: puntero al indice del nodo
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *actual, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	actual = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (actual->next == NULL)
			return (-1);
		actual = actual->next;
	}
	next = actual->next;
	actual->next = next->next;
	free(next);
	return (1);
}
