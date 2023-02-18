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

	int xf;
	int x;
	int sf;
	int s;

	for (xf = 48; xf < 58; xf++)
	{
		for (x = 48; x < 58; x++)
		{
			s = x + 1;
			sf = xf;
			for (; sf < 58; sf++)
			{
				for (; s < 58; s++)
				{
					putchar(xf);
					putchar(x);
					putchar(' ');
					putchar(sf);
					putchar(s);
					if (xf != 57 || sf != 57 || x != 56 || s != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				s = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
