#include "main.h"
#include <stdio.h>
/**
 * _abs - Declare a function passing an arg
 * Return: 0 if successsful
 * @int: initialized to 0
 */
int _abs(int c)
{
	int c;

	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	{
	return (c * -1);
	}
}
