#include "main.h"
/**
 * _memset - filling memory with a const byte
 * @s: source
 * @b: the byte
 * @n: length
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i - 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
