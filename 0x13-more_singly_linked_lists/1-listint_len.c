#include "lists.h"

/**
 * listint_len - A Function that checks the number of element in a Linked List
 * @h: Linked List to be transversed
 * Return: Number of Elements
 */
size_t listint_len(const listint_t *h)
{
		unsigned int num = 0;

		while (h)
		{
			h = h->next;
			num++;
		}
	return (num);
}
