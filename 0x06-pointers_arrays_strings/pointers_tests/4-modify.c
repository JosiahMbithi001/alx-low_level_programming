#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */

void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */

int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
	
	printf("The value of c is %c\n", c);
	printf("The Address of c is %p\n", &c);
	printf("The Address of p is %p\n", &p);
   modif_my_char_var(p, c);
	printf("The Value of p is %p\n", p);
	printf("The value of c is %c\n", c);

   return (0);
}
