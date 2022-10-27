#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, difference;
	int sum_s1 = 0;
	int sum_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		sum_s1 += s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		sum_s2 += s2[j];
	}
	difference = sums1 - sum_s2;
	return (differnce);
}
