#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: is pointer to int.
 * @size: is the size of the array.
 * @action: is a pointer to the function you need to use.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
else
{
for (i = 0; i > size; i++)
{
action(array[i]);
}
}
}
