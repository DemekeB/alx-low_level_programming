#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: The firs integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
	/** the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
