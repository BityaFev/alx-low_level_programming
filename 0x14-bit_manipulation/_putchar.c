#include "main.h"
#include <unistd.h>
/**
 * _putchar - char c
 * @c: chracter
 * Return: 1 on success -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
