#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char amanuel[] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(amanuel[x]);
	}
	_putchar('\n');
	return (0);
}
