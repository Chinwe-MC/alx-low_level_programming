#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *i
 *
 *
 */
int mul(int num1, int num2);
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if(argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
       		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);	
		result = mul(10, 98);
	}
	printf("%d\n", result);
	return (0);

}


int mul(int num1, int num2)
{
	int i;

	i = num1 * num2;
	return (i);
}
