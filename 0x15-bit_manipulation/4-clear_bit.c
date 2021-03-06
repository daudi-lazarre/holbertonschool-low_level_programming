#include "holberton.h"
/**
 * clear_bit - set bit to index num nine
 * @n: number
 * @index: index
 * Return: one
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
