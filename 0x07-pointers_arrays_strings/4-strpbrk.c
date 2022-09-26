#include "main.h"
/**
 * _strpbrk - function that loctates a character in a string
 * @s: pointer where we search for a char
 * @accept: char been searched for
 * Return: Null
 **/
char *_strpbrk(char *s, char *accept)
{
	char *string = s;
	int a;

	while (*string != '\0')
		for (a = 0; *(accept + a) != '\0'; a++)
			if (*string == *(accept + a))
				return (string);
	string++;
	return (0);
}
