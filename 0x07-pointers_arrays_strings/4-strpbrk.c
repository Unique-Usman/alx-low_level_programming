#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occur. of s in accept
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to char if found otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
