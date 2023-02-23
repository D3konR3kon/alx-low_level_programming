#include "main.h"
/**
 *_isdigit checks for a digit
 *Returns 1 if character is an integer
 *Returns 0 otherwise
 *@c is an integer
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
