#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy to a newly allocated space
 * @str: char
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int m, n = 0;
	char *alx;

	if (str == NULL)
	return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;
	alx = malloc(sizeof(char) * (m + 1));
	if (alx == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		alx[n] = str[r];
	return (alx);
}
