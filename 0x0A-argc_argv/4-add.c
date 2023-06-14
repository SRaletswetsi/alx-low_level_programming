#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p;
	unsigned int r, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
{
	s = argv[p];

	for (r = 0; r < strlen(s); r++)
	{
		if (s[r] < 48 || s[r] > 57)
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(s);
	s++;
}

printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
