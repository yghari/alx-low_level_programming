#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *t_node;

	if (head == NULL)
		return;

	while (*head)
	{
		t_node = (*head)->next;
		free(t_node);
		*head = t_node;
	}
	*head = NULL;
}