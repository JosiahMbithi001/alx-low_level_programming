#include <stdio.h>

/**
 *
 * main - The Name of an array holds the entire arrays address
 *
 * Return Always 0
 */

int main(void)
{
	int a[98];

	printf("The value of a[98]:%d\n", a[98]);
	printf("The Address of a[98] is: %p\n ", &a[0]);
	printf("The value of a is %p\n", a);

	return (0);

}
