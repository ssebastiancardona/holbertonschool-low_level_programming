#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - agrega un nuevo nodo al final de la lista
 * @head: doble puntero al inicio de la lista
 * @n: numero
 *
 * Return: puntero al nuevo nodo
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuevo;
	listint_t *actual;

	if (head == NULL)
		return (NULL);
	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = n;
	nuevo->next = NULL;
	if (*head == NULL)
	{
		*head = nuevo;
		return (nuevo);
	}
	actual = *head;
	while (actual->next != NULL)
	{
		actual = actual->next;
	}
	actual->next = nuevo;
	return (nuevo);
}
