#include "main.h"
#include <string.h>
/**
 * print_rev - function declared
 * @s: integer declared
 */
void print_rev(char *s)
{
	for (int i =strlen(s)-1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
}
