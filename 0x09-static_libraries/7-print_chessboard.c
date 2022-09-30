#include "main.h"

/**
 *print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{

	int i = 0, j;



	for (; i < 8; i++)

	{

		for (j = 0; j < 8; j++)

			_putchar(a[i][j]);

		_putchar('\n');

	}

}

#include <stdio.h>



/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

    char board[8][8] = {

        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},

        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},

        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},

        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},

        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},

        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},

        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},

        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},

    };

    print_chessboard(board);

    return (0);

}
