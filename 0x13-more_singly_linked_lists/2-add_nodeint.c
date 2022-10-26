#include "lists.h"

/**
 * add_noteint - A Function that adds a new node to the beginning of A list
 * @head: A Parameter receiving the arguement where the list begins to be transversed
 * @n: Integer to be Printed
 * Return: NULL,if it fails or Address of New Element on Success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *new;
		listint_t *temp = *head;

		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		new->n = n;
		new->next = temp;
		temp = new;
		
		 if (temp = NULL)
			{
				new->next = temp;
				printf("%d\n", new->n);
				return (new);
			}
	
		printf("%d\n",new->n);

	return (new);	
}
