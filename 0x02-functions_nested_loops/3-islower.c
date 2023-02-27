#include "main.h"

/**
 * _islower - checks for lowercase character
 * @a: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

