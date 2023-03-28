#include "main.h"

/*
 * rot13 - encodes a string
 *
 * Return: pointer to the string
 *
 */char *rot13(char *str)
{
	char *p = str;
	int i;

	while (*p != '\0')
	{
		if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
		{
			*p += 13;
		}
		else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
		{
			*p -= 13;
		}
		p++;
	}

	return (str);
}
