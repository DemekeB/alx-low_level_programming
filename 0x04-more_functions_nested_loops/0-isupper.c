#include "main.h"

/**
 * _isupper - Checks if the letter is uppercase
 * @x: the letter to be checked
 * Return: 1 for uppercase or 0 for any else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
