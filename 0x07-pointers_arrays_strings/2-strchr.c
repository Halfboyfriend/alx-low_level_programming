#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: assigned a pointer char var
 * @c: assigned char var
 * Return: c
 **/
char *_strchr(char *s, char c)
{
	unsigned char i = c;
	
	while (*s && (unsigned char)*s != c)
	return (char *)(c == (unsigned char)*s ? s : NULL);
}
