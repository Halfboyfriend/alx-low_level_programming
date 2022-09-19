#include "main.h"
#include <stdio.h>
/**
 * print_array - function declared to print arrays
 * @a: assigned int
 * @n: second assigned int
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
	printf("%d ", a[i]);
	}
	printf("\n");
}
