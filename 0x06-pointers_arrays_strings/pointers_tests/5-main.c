#include <stdio.h>

/**
 * main - dereferncing of a value
 *
 * return: 0 Always on success
 */

int main(void)
{
	int n = 10;
	int *ptr = &n;

	printf("The Value of n is %d\n", n);
	printf("The Value of n is %i\n", n);
	printf("The Address of n is %p\n", &n);
	printf("The value of *ptr is %p\n", ptr);
	*ptr = 20;
	printf("The Value of n is %d\n", n);
	printf("The Address of *ptr is %p\n", &ptr);
	printf("The Address of *ptr is %p\n", &ptr);
	return (0);

}
