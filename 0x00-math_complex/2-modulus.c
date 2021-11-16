#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 * modulus - modulus a complex number
 * @c: structure that contain the complex number
 *
 * Return: modulus
 */
double modulus(complex c)
{
	double mod;

	mod = sqrt(pow(c.im, 2) + pow(c.re, 2));

	return (mod);
}
