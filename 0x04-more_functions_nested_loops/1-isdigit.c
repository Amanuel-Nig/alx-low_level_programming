#include "main.h"

/**
 * _isupper - checks if it is digit
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
