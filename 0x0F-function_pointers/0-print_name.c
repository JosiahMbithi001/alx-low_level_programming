#include "function_pointers.h"

/**
 * print_name - A Function that prints a name
 * @name - The name to be printed
 * @f - Function to print name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
