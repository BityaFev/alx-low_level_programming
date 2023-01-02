#include "main.h"
/**
 * print_chessboard - prints
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (j = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			putchar(a[i][j]);
		}
		putchar(10);
	}
}
