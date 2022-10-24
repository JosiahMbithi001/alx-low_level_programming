#include "main.h"

/**
 * Swap-int -A Function that swaps the values of two integers
 * @a - First Parameter to be swaped
 * @b - Second Parameter to be swaped
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
