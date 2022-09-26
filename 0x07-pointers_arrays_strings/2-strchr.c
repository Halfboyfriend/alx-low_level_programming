#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string
 * @s: assigned a pointer char var
 * @c: assigned char var
 * Return: c
 **/
char *_strchr(char *s, char c)
{
	do
	{
	if (s == c)
	{
	return (s);
	}
	while (s++);
	return (NULL);
}
