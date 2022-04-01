#include<stdio.h>

/**
 * main - is a funtion that prints the number of arguments passed into it.
 *@argc: is an argument counter for int.
 *@argv: is an argument value for char.
 *Return: Returns always success.
**/

int main(int argc, char *argv[])
{
        (void)argv;

	printf("%d\n", argc);
	return(0);
}
