#include "main.h"
/**
 * print_triangle - function that print a triangle
 * @size: assigned to int
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= size; j++)
	{
	_putchar(' ');
	}
	_putchar('#');
	}
	if (size < 0)
	{
	_putchar('\n');
	}
}
