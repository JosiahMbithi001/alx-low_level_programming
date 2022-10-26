#include "lists.h"

/**
 * print_listint - A Function That prints all elements of a list
 * @h: List to be transersed.
 * Return: Number of Elements
 */

size_t print_listint(const listint_t *h)
{
		unsigned int num = 0;

		while (h)
		{
			printf("%d\n", h->n);

			h = h->next;
			num++;
		}
	return (num);
}
