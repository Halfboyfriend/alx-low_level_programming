#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: assigned a pointer char var
 * @c: assigned char var
 * Return: c
 **/
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
		return (s);
		}
		else if (!*s)
		{
		return (NULL);
		}
	}
	return (NULL);
}
