#include <stdio.h>
#include <ctype.h>

/**
 * main - print an alphabeth in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char loweralpha;


	for (loweralpha = 'a'; loweralpha <= 'z';)
	{
		if(loweralpha == 'e' || loweralpha == 'q')
		{
			loweralpha++;
			putchar(tolower(loweralpha));
		}
		putchar('\n');
	}
	return (0);
}
