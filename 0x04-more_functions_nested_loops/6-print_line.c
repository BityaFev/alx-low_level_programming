#include "main.h"
/**
 * print_line - function that draws a straight line in the term
 * @n: input number
 * Return: straight line
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(j = 1; j <= n; j++)
		{
	_putchar('_');
}
_putchar('\n');
}
}
