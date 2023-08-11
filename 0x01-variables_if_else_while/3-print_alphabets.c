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
	char upperalpha;

	for (loweralpha = 'a'; loweralpha <= 'z'; loweralpha++)
	{
		putchar(loweralpha);
	}
	for (upperalpha = 'A'; upperalpha <= 'Z'; upperalpha++)
	{
		putchar(upperalpha);
	}
	putchar('\n');
	return (0);
}
