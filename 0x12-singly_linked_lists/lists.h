#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct list_t - A linked list node with a string value and a length field.
 * @str: A pointer to a string value for the node.
 * @len: The length of the string value, in bytes.
 * @next: A pointer to the next node in the linked list.
 *
 * Description: This struct defines a node in a singly-linked list.
 *              Each node contains a string value, a length field,
 *              and a pointer to the next node in the list.
 */

typedef struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
