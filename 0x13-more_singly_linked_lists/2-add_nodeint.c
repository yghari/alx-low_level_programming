#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a listint_t list.
* @head: Pointer to a pointer to the head node of the list.
* @n: The integer to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
