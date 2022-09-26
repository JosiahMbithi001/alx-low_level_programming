#include <stdio.h>

/**
 * main - showing address
 *
 *Return: Always 0
 */

int main(void)
{
	int n;
	char c;
	int *ptr = &n;
	printf("The Address of c is %p\n", &c);
	printf("The Address of n is %p\n", &n );
	printf("The Address of *ptr is %p\n", &ptr);
	return (0);
}

