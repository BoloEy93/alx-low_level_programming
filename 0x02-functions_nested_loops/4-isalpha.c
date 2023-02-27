#include "holberton.h"

/**
 * _isalpha - checks for alphabet character
 * @a: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
