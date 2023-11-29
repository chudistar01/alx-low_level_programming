#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: arguement count
 * @argv: pointer to array of command line arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
