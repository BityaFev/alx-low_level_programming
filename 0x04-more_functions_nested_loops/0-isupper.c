#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @c: the letter
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
