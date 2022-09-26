#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: assigned a pointer char var
 * @c: assigned char var
 * Return: c
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
	}
	return (NULL);
}
