#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Parameters passed to the function.
 * @...: Variable numberof parameter to calculate the sum
 *
 * Return: if n == 0 - 0.
 * Otherwise - sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int p, sum = 0;

	va_start(ap, n);

	for (p = 0; p < n; p++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
