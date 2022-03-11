#include <stdio.h>

/**
 * main - main block
 * prints possible combinations of single-digit numbers
 * Retrun: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(32);
		}

	}
	putchar('\n');
	return (0);
}
