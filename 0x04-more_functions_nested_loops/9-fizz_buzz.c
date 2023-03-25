#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, following by
 * but for multiples of three prints fizz instead of the
 * and for the multiples of five prints buzz
 * Return: Always 0
 */
int main(void)
{
	int i;
	
	for (i = 1 ; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
		{
			printf("bizz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
