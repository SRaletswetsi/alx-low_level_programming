#include "main.h"

/**
 * _strchr - an unsigned char in the string pointed
 * @s: enter value
 * @c: enter value
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
