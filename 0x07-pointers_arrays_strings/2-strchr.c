#include "main.h"
/**
 * _strchr - locate char in a string
 * @s: string
 * @c: character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{return (s);
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
