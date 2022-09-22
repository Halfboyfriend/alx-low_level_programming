#include "main.h"
#include <string.h>
/**
 * _strncat - function declared to print two concatenated strings
 * @dest: assigned char variable
 * @src: assigned char variable
 * @n: assigned int variable
 * Return: is dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int l, j;

	l = strlen(dest);

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[l + j] = src[j];
	dest[l + j] = '\0';
	}
	return (dest);
}
