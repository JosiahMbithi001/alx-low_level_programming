#include <stdio.h>

/**
 * modify_my_param(int m)
 *@m: useless Integer
 *
 * Return Nothing
 */

void modify_my_param(int m)
{
	m = 402;

}

/**
 * main - parameters are passed by value
 *
 * return: Always 0.
 */

int main(void)
{
	int n = 98;

	modify_my_param(n);

	return(0);
}
