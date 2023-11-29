#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: arguement count
 * @argv: pointer to array of arguements
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
