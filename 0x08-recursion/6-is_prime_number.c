#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - return the natural square root of a number
 * main - check the code
 * @n: integer parameter
 * Return: Always 0.
*/

int is_prime_number(int n)
{
	int p_number_array[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

	int counter = 0;

	if (n % p_number_array[counter] == 0)
	{
		counter++;
		is_prime_number(p_number_array[counter]);
	}
	if (counter == 10)
	{
		return (1);
	}

	return (0);
}
