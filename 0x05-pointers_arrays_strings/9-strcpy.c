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
	
	int var = 0;
	
	while (*(src + var) != '\0')
	{
	*(dest + var) = *(src + var);
	dest++;
	src++;
	}
	*(dest + var) = '\0';
	return (dest);
}
