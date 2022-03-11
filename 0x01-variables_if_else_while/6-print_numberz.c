#include <stdio.h>

/**
 * main - main block 
 * prints  numbers from 0 - 9 using int variable
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
