#include <stdio.h>
#include "holberton.h"
/**
 * display_complex_number - display complex number
 * @c: structure that contain the complex number
 *
 * Return: void
 */
void display_complex_number(complex c)
{
	if (c.re != 0)
	{
		printf("%d ", c.re);
	}
	if (c.im != 0)
	{
		if (c.im >= 0)
		{
			printf("+ ");
		}

		if (c.im <= 0)
		{
			printf("- ");
			c.im = c.im * -1;
		}
		printf("%di", c.im);
	}
	printf("\n");
}
