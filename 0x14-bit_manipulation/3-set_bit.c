#include "main.h"
/**
 * set_bit - sets vlue for thh one giveen at index 1
 * @n: pointer
 * @index: index
 * Return: -1 for error and 1 otw
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
