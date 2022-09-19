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
	
	int abc = 0;
	
	while (*(src + abc) != '\0')
	{
	*(dest + abc) = *(src + abc);
	dest++;
	src++;
	}
	*(dest + abc) = '\0';
	return (dest);
}
