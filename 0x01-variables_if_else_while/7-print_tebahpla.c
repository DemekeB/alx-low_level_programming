#include <stdio.h>
/**
 * main - Entry point
 * discription: 'prints lowercase alphabet in reverse order'
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
