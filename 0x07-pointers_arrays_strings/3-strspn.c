#include "main.h"
/**
 * _strspn - print consecutive chars of s1 found in s2
 * @s: source
 * @accept: searching string
 * Return: new string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
		if (*(accept + i) == '\0')
			break;
	}
	return (j);
}
