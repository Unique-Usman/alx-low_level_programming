#include "main.h"

/**
* _isalpha - Retuns 1 if char c is a letter,
* and a lowercase or uppercase
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for the rest.
*/

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
