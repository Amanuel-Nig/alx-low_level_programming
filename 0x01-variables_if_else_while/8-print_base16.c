#include <stdio.h>

/**
 * main - main block
 * prints hexadecimals in lowercase
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 48; a <= 122; a++)
	{

		if ((a < 58 || a >= 97) && a <= 102)
		{
			putchar(a);
		}

	}

	putchar('\n');
	return (0);
}
