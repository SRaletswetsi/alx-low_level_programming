#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @array: array
 * @cmp: pointer to the function to be used to compare values
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]))
			return (p);
	}
	return (-1)
}
