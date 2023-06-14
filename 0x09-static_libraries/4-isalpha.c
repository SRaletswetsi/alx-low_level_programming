#include "main.h"

/**
 * _isalpha - check whether a character is an alphabet or not.
 * @c: character to be checked
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
