#include "main.h"
/**
 * _isalpha - Checks charcter
 * @c: The character to be checked
 * Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise
 */

int _isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
