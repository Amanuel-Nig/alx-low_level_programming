#include "main.h"

/**
 * _isupper - check the code if it is uppercase.
 * @c: the characetr to be checked
 * 
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
   if (c >= 'A' && c<= 'Z')
    {
	    return(1);
    }
    return(0);
}
