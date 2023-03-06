#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - ocates the first occurrence in the string 
 * s of any of the bytes in the string accept
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
