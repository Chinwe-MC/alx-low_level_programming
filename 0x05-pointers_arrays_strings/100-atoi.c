#include "main.h"

/**
 *_atoi: Function name
 *@s: function parameter
 *_atoi: int
 *Return: int
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int len = 0;
	int num = 0;
	int i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && c == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (a % 2)
				num = -num;
			b = b * 10 + num;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}
		if (c == 0)
			return (0);
		return (b);
}
