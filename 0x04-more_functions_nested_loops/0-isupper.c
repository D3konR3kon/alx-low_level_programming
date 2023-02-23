#include "main.h"
/**
 *_isupper checks for uppercase
 *Returns 1 if character is upper
 *Returns 0 otherwise
 *@c is an integer
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
