#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints its name followed by a new line
 * @argc: argurment count
 * @argv: argurement Value,A string that comes after calling a function
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
		if (argc > 1)
			printf("%s\n", argv[0]);

		return (0);
}


