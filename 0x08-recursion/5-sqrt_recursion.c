#include "main.h"
/**
 * helperFunction - checks existence of number
 * @num: number
 * @pSqrt: possible sqrt of  number
 * Return: sqrt
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if((pSqrt *pSqrt) > num)
			return (-1);
		else return (helperFunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number
 * Return: squareroot of n. -1 if n dousn't have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
