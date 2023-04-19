#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - use pointer function to print name
 * @name: name of the person
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
