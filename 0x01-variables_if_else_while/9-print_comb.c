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
	int nums[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int x;

	for (x  = 0; x <= 9; x++)
	{
		putchar(nums[x]);

		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
