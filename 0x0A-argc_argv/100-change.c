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
int i;
int coin;

coin = 0;
if (argc == 2)
{
i = atoi(argv[1]);
while (i > 0)
{
if (i - 25 >= 0)
{
i -= 25;
coin++;
}
else if (i - 10 >= 0)
{
i -= 10;
coin++;
}
else if (i - 5 >= 0)
{
i -= 5;
coin++;
}
else if (i - 2 >= 0)
{
i -= 2;
coin++;
}
else if (i - 1 >= 0)
{
i -= 1;
coin++;
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", coin);
return (0);
}
