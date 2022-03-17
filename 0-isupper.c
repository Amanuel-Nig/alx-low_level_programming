#include "main.h"
#include <stdio.h>

/** * main - check the code if it is uppercase.
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
    char c;

    if (c >= 'A' && c<= 'Z')
    {
	    return(1);
    }
    return(0);
}
