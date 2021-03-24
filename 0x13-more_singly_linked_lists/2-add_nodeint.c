#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - crea un nuevo nodo al principio de la lista
 * @head: doble puntero al principio de la lista
 * @n: numero para adicionar
 *
 * Return: la direccion del nuevo nodo
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nueva;

	if (head == NULL)
		return (NULL);
	nueva = malloc(sizeof(listint_t));
	if (nueva == NULL)
		return (NULL);
	nueva->n = n;
	nueva->next = *head;
	*head = nueva;
	return (nueva);
}
