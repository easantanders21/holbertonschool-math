#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * conjugate - conjugate a complex number
 * @c: structure that contain the complex number
 *
 * Return: void
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
