#include "main.h"
/**
 * swap_int - function declared
 * @a: firstd interger
 * @b: second interger
 */
void swap_int(int *a, int *b)
{
	int swp;

	*a = *b;
	swp = *a;
	*b = swp;

}
