#include <stdio.h>
#include "main.h"


int main(void)
{
	int num;
	int i;
	int end_num = 1024;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 || i % 5 == 0)
		{
			num = num + i;
		}
	}
	printf("%d\n", num);
	return (0);
}
