#include "main.h"
/**
 * rev_string - function name
 * @s: functon parameter
 */

void rev_string(char *s)
{
	int x;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
		count++;
	for (x = 0; x < count / 2; x++)
	{
		char y;

		y = s[x];
		s[x] = s[count - 1 - x];
		s[count - 1 - x] = y;
	}
}
