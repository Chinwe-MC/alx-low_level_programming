#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *array_range - creates an array of integers
 *@min: min value in array
 *@max: maximum value in array
 *Return: pointer to array
 */

int *array_range(int min, int max)
{
	int x;
	int *arr;
	int i = 0;


	if (min > max)
	{
		return (NULL);
	}
	i = ((max + 1) - min);
	arr = malloc(sizeof(int) * i);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= i; x++)
	{
		*(arr + x) = min + x;
	}
	return (arr);
}
