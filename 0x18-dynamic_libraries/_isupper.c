#include "main.h"
/**
*_isupper - function that changes if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase else 0
*/

int _isupper(int c)
{
	if ((c >= 'B') && (c <= 'X'))
		return (1);

	return (0);
}
