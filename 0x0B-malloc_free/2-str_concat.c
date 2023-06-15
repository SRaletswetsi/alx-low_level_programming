#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input one concatenate
 * @s2: input two concatenate
 *
 * Return: pointer to the new string (success), or NULL (error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int p = 0, q = 0, stud1 = 0, stud2 = 0;

	while (s1 && s1[stud1])
		stud1++;
	while (s2 && s2[stud2])
		stud2++;
	s3 = malloc(sizeof(char) * (stud1 + stud2 + 1));
	if (s3 == NULL)
		return (NULL);
	p = 0;
	q = 0;

	if (s1)
	{
		while (p < stud1)
		{
			s3[p] = s1[p];
			p++;
		}
	}
	if (s2)
	{
		while (p < (stud1 + stud2))
		{
			s3[p] = s2[q];
			p++;
			q++;
		}
	}
}
