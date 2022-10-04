#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - funion
 * @s1: pointer char variable
 * @s2: pointer char variable
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s2[a] != '\0'; a++)
	{
		s2[a] = s1[b];
	}
}
