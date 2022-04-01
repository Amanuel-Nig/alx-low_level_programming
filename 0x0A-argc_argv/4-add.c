#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - add postitve numbers.
 * @argc: counts the arguments passed to the function.
 * @argv: gives the value for the argument passed to the function.
 *
 * Return: Returns always success.
 */

int main(int argc, char *argv[])
{
int i;
int sum;

sum = 0;
if (argc > 1)
{
for (i=1; i < argc; i++)
{
sum += atoi(argv[i]);
}
if (isdigit(sum) == 0)
{
printf("%d\n", sum);
return (0);
}
else
{
printf("%c\n", "Error");
return (1);
}
}
else (argc == 1)
{
printf("%s\n", "Error");
return (1);
}
