#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function to create an array
 * @size: Unsigned int
 * @c: char variable
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int *ptr;

	ptr = (int *)malloc(c * sizeof(int));
	if (size == 0)
	{
	return (NULL);
	}
	else
	{
	return (ptr);
	}
	free(ptr);
}
