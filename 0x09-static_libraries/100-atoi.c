#include "main.h"

/**
 * _atoi - covert string into an integer
 * @s: the string to used
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sig = 1, r = 0;
	unsigned int unsig = 0;

	while (!(s[r] <= '9' && s[r] >= '0') && s[r] != '\0')
	{
		if (s[r] == '-')
			sig *= -1;
		r++;
	}
	while (s[r] <= '9' && (s[r] >= '0' && s[r] != '\0'))
	{
		unsig = (unsig * 10) + (s[r] - '0');
		r++;
	}
	unsig *= sig;
	return (unsig);
}
