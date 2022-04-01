#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the function.
 * @argc: counts the arguments of the function.
 * @argv: gives the value of the arguments passed to the function.
 *
 * Return: Return always success.
**/

int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc == 2)
{
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents - 25 >= 0)
{
cents -= 25;
coins++;
}
else if (cents - 10 >= 0)
{
cents -= 10;
coins++;
}
else if (cents - 5 >= 0)
{
cents -= 5;
coins++;
}
else if (cents - 2 >= 0)
{
cents -= 2;
coins++;			}
else if (cents - 1 >= 0)
{
cents -= 1;
coins++;
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", coins);
return (0);
}
