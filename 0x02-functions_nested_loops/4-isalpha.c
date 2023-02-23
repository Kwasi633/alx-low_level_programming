#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: is the character to be checked
 * Return: 1 is char is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
