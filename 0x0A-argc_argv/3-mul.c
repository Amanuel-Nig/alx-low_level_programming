#include<stdio.h>
#include <stdlib.h>

/**
 * main - prints the function.
 * @argc: counts agruments passed to the function for int.
 * @argv: gives the value passed to the function for char.
 *
 * Return: Returns always success.
**/
int main(int argc, char *argv[])
{
char i = "Error";
if argc == 3
{
	printf("%d * %d", argv[1], argv[2]);

	return(0);
}
printf("%c", i);

return(1);
}
