#include "main.h"
#include <string.h>
/**
 * rev_string - function declared
 * @s: integer declare
 * Return: no returns
 */
void rev_string(char *s)
{
	char c;
	int l, i;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
	s[i] = c;
	c = s[l - 1 - i];
	s[l - 1 - i] = s[i];
	}
	_putchar(s[i]);
}
