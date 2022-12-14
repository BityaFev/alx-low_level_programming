#include "main.h"

/**
 * print_sign - prints the sign
 * @n: the number detected
 * Return: 1 for number greatr than 0
 * 0 for the number 0
 * -1 for numbers less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
