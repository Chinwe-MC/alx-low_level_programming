#include <stdio.h>

/**
 * main - print an alphabeth in lowercase
 *
 * Return: Always 0 Success
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	return (0);
}
