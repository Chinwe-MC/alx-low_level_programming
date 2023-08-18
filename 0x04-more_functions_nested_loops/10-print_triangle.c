#include "main.h"

/**
 *print_triangle - print a triangle
 *@size: function parameter
 *Return: void
 */

void print_triangle(int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{

		for (col = 0; col < size; col++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else if (row + col < size - 1)
			{

				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
	}
	_putchar('\n');
	

}
