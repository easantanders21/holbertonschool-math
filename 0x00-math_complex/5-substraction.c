#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 * substraction - subtract two complex numbers
 * @c1: complex number to subtract
 * @c2: complex number to subtract
 * @c3: result subtract c1 and c2
 *
 * Return: c3
 */
void substraction(complex c1, complex c2, complex *c3)
{
	(*c3).re = c1.re - c2.re;
	(*c3).im = c1.im - c2.im;
}
