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
	int n;
	int lNum;
	int fNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lNum = n % 10;
	if (n > 0 && lNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 and not 0\n", n, lNum);
	}
	else if (lNum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lNum);
	}
	else if (n < 0 || lNum < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lNum);
	}
	return (0);
}
