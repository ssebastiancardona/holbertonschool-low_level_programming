#include "lists.h"
/**
 * get_nodeint_at_index - retorna el nodo
 * @head: puntero al primer nodo de la lista
 * @index: indice del retorno del nodo
 *
 * Return: puntero
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
