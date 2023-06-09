#include "lists.h"

/**
 * _strlen - lenght of a string
 * @s: the string
 *
 * Return: the lenght of the string s
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);

}

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: A pointer to a pointer to the head of the linked list.
* @str: The string value to be added to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = _strlen(str);
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
