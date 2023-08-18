#include <stdio.h>
#include <math.h>

/**
 * 
 *
 *
 */


int main(void)
{
	long int i;
	long int maximum;
	long int j;

	i = 612852475143;
	maximum = -1;

	while (i % 2 == 0)
	{
		maximum = 2;
		i /= 2;
	}
	for (j = 3; j <= sqrt(i); j = j + 2)
	{
		while (i % j == 0)
		{
			maximum = j;
			i = i / j;
		}
	}
	if (i > 2)
	{
		maximum = i;
	}
	printf("%ld\n", maximum);
	return (0);
}	
