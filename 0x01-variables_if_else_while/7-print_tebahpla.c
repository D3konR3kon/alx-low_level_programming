#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	for (char x  = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
