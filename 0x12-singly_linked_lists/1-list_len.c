#include "lists.h"

/**
 * list_len: A Function that gets the Number of Nodes in a Linked List
 * @h: List to be transversed
 * Return: Number of Elements
 */

size_t list_len(const list_t *h)
{
		unsigned int num = 0;

			while (h != NULL)
			{
				h = h->next;
					num++;
			}
	return (num);
}
