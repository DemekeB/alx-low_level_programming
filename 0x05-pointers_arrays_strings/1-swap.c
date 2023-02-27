#include <stdio.h>
/**
 * SWAP_int - Swaps the values of two integers
 * @a: The firs integer
 * @b: The second integer
 * Return: Nothing
 */
void SWAP_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
