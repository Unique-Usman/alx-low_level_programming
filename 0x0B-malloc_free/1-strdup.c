#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i;
	int count;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
		count++;
	ptr = malloc(count + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	
	return (ptr);
}
