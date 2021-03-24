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
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	primero = *head;
	*head = primero->next;
	n = primero->n;
	free(primero);
	return (n);
}
