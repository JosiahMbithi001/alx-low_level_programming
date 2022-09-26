#include <stdio.h>

/**
 * main  storing the address of a variable
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int n = 10;
	int *p = &n;

	printf("The Address of n is %p\n", &n);
	printf("The value of p is %p\n", p);
	printf("The Address of p is %p\n", &p);

	return (0);
}
