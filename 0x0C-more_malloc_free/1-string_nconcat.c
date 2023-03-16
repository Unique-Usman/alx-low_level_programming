#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;
	int count1 = 0;
	int count2 = 0;

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	ptr = malloc(count1 + n + 1);
	if (n >= count2)
	{
		if (ptr == NULL)
			exit(98);
		for (i = 0; i < count1; i++)
		{	
			ptr[i] = s1[i]; 
		}
		for (i = 0; i < count2; i++)
		{	
			ptr[i] = s1[i]; 
		}
	}
	else
	{	
		if (ptr == NULL)
			exit(98);
		for (i = 0; i < count1; i++)
		{	
			ptr[i] = s1[i]; 
		}
		for (i = 0; i < n; i++)
		{	
			ptr[i] = s1[i]; 
		}
	}
	ptr[count1 + n] = '\0';
	return (ptr);
}
