#include <stdio.h>

int main(void)
{
	int a = 123;
	int *p;
	int **p2;

	p = &a;
	p2 = &p;

	printf("The value of a is:%d\n", a);
	printf("The value of p is %d\n", *p);
	printf("The value of p2 is %d\n", **p2);
	printf("The Address of a is %p\n", &a);
	printf("The Address of p is %p\n", &p);
	printf("The Address of p2 is %p\n", &p2);
	printf("The value of a is %p\n", &a);
	printf("The Value of p is %p\n", p);
	printf("The Value of p2 is %p\n", p2);
	printf("The Value of p2 is %p\n", &p2);

	return (0);
}
