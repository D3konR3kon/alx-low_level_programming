#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);

	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);

		if (alpha == 'Z')
		{
			putchar('\n');
		}
	}
	return (0);
}
