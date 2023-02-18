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
	int i;
	int x;

	for (x  = 48; x < 57; x++)
	{
		for (i = x + 1; i < 58; i++)
		{
			putchar(x);
			putchar(i);
			if (x != 56 || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
