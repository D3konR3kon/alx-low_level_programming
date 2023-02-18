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
	int n;

	for (x  = 48; x < 56; x++)
	{
		for (i = x + 1; i < 57; i++)
		{
			for (n = i + 1; n < 58; n++)
			{
				putchar(x);
				putchar(i);
				putchar(n);
				if (x != 55 || i != 56 || n != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
