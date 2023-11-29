#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc: arguement count
 * @argv: pointer to array of command line arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;

		printf("%d\n", product);
	}
	return (0);
}
