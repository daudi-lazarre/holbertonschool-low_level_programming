#include "holberton.h"

/**
 * print_triangle - make a triangle
 * @size: size of the shape
 * Return: void
 */

void print_triangle(int size)
{
	int x;
	int y;
	int pound = 1;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (size - x <= pound)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			pound++;
			_putchar(10);
		}
	}
}
