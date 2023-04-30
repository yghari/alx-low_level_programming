#include "lists.h"

/**
*get_nodeint_at_index - Returns the nth node of a listint_t
* @head: A pointer to the head of the list.
* @index: The index of the node to retrieve.
*
* Return: A pointer to the nth node, or NULL if the node does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	for (i = 0, node = head; node != NULL && i < index; i++, node = node->next)
		;
	return (node);
}
