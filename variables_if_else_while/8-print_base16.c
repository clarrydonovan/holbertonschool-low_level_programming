#include <stdio.h>

/**
* main - prints base
*
*
* return: Always
*
*/
int main(void)
{
	char character;
	int number;

	for (number = 0; number <=  9; number++)
		putchar(number + '0');
	for (character = 'a'; character <= 'f'; character++)
{
	putchar(character);
}
putchar('\n');
return (0);
}

