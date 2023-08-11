#include <stdio.h>
#include <ctype.h>

 /**
 * main - print an alphabeth in lowercase
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if(islower(alpha))
		{
			putchar(toupper(alpha));
		}
		else if(isupper(alpha))
		{
			putchar(tolower(alpha));
		}
	}
	putchar('\n');
	return (0);
}
