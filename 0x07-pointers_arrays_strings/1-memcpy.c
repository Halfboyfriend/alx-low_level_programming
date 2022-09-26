#include "main.h"
/**
 * _memcpy - function to copy
 * @dest: destination char
 * @src: source char
 * @n: int
 * Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
