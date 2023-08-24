#include "main.h"

/**
 *reverse_array - function to reverse numbers
 *@a: function parameter
 *@n: function parameter
 *Return: void
 */


void reverse_array(int *a, int n)
{
	int temp;
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
		first++;
		last--;
	}
}
