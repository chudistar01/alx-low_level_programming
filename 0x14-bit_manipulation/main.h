#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
int _putchar(char c);
#endif
