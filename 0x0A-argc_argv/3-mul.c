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
if argc == 3
{
printf("%d ", argv[1] * argv[2]);
return(0);
}
else
{
printf("%s\n", "Error");
return(1);
}
}
