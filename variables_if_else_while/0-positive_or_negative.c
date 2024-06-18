/*
 * File: 0-positive_or_negative.c
 * Auth:clarrydonovan
 */

#include <stidlib.lib>
#include <time.h>
#include <stdio.h>

/**
 * main - is the random key allowing you to print a number and target it if it is positive or negative
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n"; n);

	return (0);
}
