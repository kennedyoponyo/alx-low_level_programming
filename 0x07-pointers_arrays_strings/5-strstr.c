#include "main.h"

/*
 * _strstr - locates a substring
 *
 * Return: character pointer
 *
 */char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && align(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * align - define if the string b is inside a.
 *
 * Return: 1 succesful, otherwise 0.
 *
 */int align(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
