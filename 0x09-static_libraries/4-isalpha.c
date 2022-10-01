#include "main.h"
/**
 * _isalpha - its a function in the main header that allows us to print
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
