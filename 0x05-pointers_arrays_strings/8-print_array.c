#include "main.h"
/**
 * print_array - function declared to print arrays
 * @a: assigned int
 * @n: second assigned int
 */
void print_array(int *a, int n)
{
	int n = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < n; i++)
	{
	printf("%d ", a[i]);
	}
	printf("\n");
}
