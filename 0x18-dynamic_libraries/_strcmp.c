#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int j = 0, diff = 0;

	while (1)
	{
		if (s1[j] == '\0' && s2[j] == '\0')
			break;

		else if (s1[j] == '\0')
		{
			diff = s2[j];
			break;
		}

		else if (s2[j] == '\0')
		{
			diff = s1[j];
			break;
		}
		else if (s1[j] != s2[j])
		{
			diff = s1[j] - s2[j];
			break;
		}
		else
			j++;

	}
	return (diff);
}
