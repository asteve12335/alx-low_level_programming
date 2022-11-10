#include <stdlib.h>

/**
 * string_nconcat - attaches n bytes of s2 to s1
 * @s1: string 1
 * @s2:string 2
 * @n: integer
 * Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k = 0;
	char *str;

	str = malloc(_strlen(s1) + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= _strlen(s2))
	{
		s2 = s2;
	}

	for (i = 0; i < _strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	
	for (j = _strlen(s1); j < (_strlen(s1) + n); j++)
	{
		str[j] = s2[k];
		k++;
	}
}


/**
 * _strlen - gets the string length
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
