#include "holberton.h"
/**
 * print_chessboard - prints a chess board
 *Return: void
 *
 *@a: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int x = 0;
	char place;

	while (i < 8)
	{
		while (x < 8)
		{
			place = a[i][x];
			_putchar(place);
			x++;
		}
		_putchar('\n');
		x = 0;
		i++;
	}
}
