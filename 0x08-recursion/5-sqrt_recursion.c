#include "main.h"
/**
 * sqrt - funtion
 * _sqrt_recursion - funtion that returns square root
 * @n: int variable
 * @cal: indirect recursive function
 * Return: values && -1i
 **/
int sqrt(int n, int cal)
{
	if (cal * cal == n)
	return (cal);
	else if (cal * cal < n)
	return (sqrt(n, cal + 1));
	else
	return (-1);
}

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
