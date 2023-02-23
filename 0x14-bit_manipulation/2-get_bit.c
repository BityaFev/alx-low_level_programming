#include "main.h"
/**
 * get_bit - val of bit
 * @n: the bit
 * @index: index to be get from th val of 0
 * Return: -1 for error val otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
