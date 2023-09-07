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
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * max + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
