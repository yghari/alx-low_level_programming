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
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a pointer to the head of the list.
 * @str: the string to be added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *new_node, *last_node;

		if (str == NULL)
			return (NULL);

		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->len = _strlen(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			last_node = *head;
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->next = new_node;
		}
		return (new_node);
}
