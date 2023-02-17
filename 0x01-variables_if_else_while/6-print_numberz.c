#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int nums[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int x = 0;

	while (x <= 9)
	{
		putchar(nums[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
