#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - libera la lista
 * @head: puntero loble a la lista
 *
 * Return: retorna toda la libertad que te nego tu ex
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
