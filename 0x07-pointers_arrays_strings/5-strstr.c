#include "main.h"

/**
 * _strstr - prints function that locates a substring
 * @haystack: input string to be searched
 * @needle: input sring to be located
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *f = haystack;
char *t = needle;

while (*f == *t && *t != '\0')
{
f++;
t++;
}

if (*t == '\0')
return (haystack);
}

return (0);
}
