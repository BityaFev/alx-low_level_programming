#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: array
 * @size: size
 * @cmp: comparing pointer
 * Return: index of the first elmt does not return 0 or -1 if match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
					
