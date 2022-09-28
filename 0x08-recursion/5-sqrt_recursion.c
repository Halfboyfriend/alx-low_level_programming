#include "main.h"
/**
 * sqr - funtion
 * _sqrt_recursion - funtion that returns square root
 * @n: int variable
 * @cal: indirect recursive function
 * Return: values && -1
 **/
int square(int n, int val)
{
	if (val * val == n)
	return (val);
	if (val * val < n)
	return (square(n, val + 1));
	return (-1);
}
int _sqrt_recursion(int n) 
{
	return(square(n, 1));
}
