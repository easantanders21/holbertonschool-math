#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 * argument - argument of a complex number
 * @c: structure that contain the complex number
 *
 * Return: argument
 */
double argument(complex c)
{
	double arg;

	arg = atan(c.im / c.re);

	return (arg);
}
