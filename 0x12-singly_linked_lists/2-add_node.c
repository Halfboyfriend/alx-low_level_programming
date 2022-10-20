#include "lists.h"
#include <string.h>
/**
 * add_note - function that adds a new node
 * @head: a pointer to the head
 * @str: string to be added
 * Return: NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	int l;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (m == NULL)
		return (NULL);
	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(n);
		return (NULL);
	}
	for (l = 0; str[l];)
		l++;
	n->str = ptr;
	n->l = l;
	n->next = *head;

	*head = n;

	return (n);
}
