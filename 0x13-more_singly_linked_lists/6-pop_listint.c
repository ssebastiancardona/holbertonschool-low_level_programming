#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - arranquenle la cabeza
 * @head: puntero doble al inicio de la lista
 *
 * Return: la cabeza de tu ex en una canasta
 */
int pop_listint(listint_t **head)
{
	listint_t *primero;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	primero = *head;
	*head = primero->next;
	i = primero->i;
	free(primero);
	return (i);
}
