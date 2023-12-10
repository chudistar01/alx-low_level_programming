#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - this function accesses the op_t struct
 * datatype
 * @s: character to be checked
 * Return: mul,add, sub, div or mod depending on the
 * function called
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 5)
{
	if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
	i++;
}
return (0);
}
