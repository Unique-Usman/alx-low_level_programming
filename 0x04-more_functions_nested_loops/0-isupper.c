#include "main.h"

/**
 *_isupper - it checks if a character is upper or not
 *@c: the character to be check
 *Return: return 1 if c is upper 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c<= 90)
		return (1);
	else
		return (0);
}
