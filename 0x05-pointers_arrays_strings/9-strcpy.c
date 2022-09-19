#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function to copy a string
 * @src: assinged int
 * @dest: assigned int 
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
	{
	return NULL;
	}

	char *pt = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++
	}
	*dest = '\0';
	return pt;
}
