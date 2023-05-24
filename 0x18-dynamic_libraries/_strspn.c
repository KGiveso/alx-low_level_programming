#include "main.h"
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (accept[n] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[n + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
