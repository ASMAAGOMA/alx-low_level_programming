#include "3-calc.h"
#include "function_pointers.h"
#include <stddef.h>

/**
 * op_add - returns the sume of two inputs
 * @a: first input
 * @b: second input
 * Return: the sum of two inputs
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub - returns the sume of two inputs
 *@a: first input
 *@b: second input
 *Return: the sub of two inputs
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns the sume of two inputs
 *@a: first input
 *@b: second input
 *Return: the sub of two inputs
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns the sume of two inputs
 *@a: first input
 *@b: second input
 *Return: the sub of two inputs
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 *op_mod - returns the sume of two inputs
 *@a: first input
 *@b: second input
 **Return: the sub of two inputs
 */
int op_mod(int a, int b)
{
	return (a % b);
}
