#include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line
 * @argc: Arguement count
 * @argv: An array of pointers to the command line arguement
 * Return: 0
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
