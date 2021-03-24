#ifndef _LIST_
#define _LIST_
#include <stdlib.h>
/**
 * struct list_s - lista
 * @str: string - (malloc string)
 * @next: puntero al siguiente nodo
 * @len: tamaño
 * Description: Estructura enlazada individualmente
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
int _putchar(char c);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif /* _LIST_ */