#include "main.h"

/**
 * _strstr - locates strng2 in string1
 * @haystack: string1
 * @needle: string2
 *
 * Return: pointer to start of located string2
 */

char *_strstr(char *haystack, char *needle)
{
	char *string1 = haystack, *string2 = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (string1);
		}
		needle = string2;
		string1++;
		haystack = string1;
	}
	return (0);
}
