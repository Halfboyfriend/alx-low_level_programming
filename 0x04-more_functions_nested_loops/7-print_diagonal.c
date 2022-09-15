#include "main.h"
/**
 * print_diagonal - function declared
 * @n: interger assigned
 */
void print_diagonal(int n)
{
	int b1, b2;
	
	for (b1 = 0; b1 < n; b1++)
	{
	for (b2 = 0; b2 < b1; b2++)
	{
	_putchar(' ');
	}
	_putchar(98);
	_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
