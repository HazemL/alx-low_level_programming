#include "main.h"
#include <stdio.h>
#include <ctype.h>
/*
 * Write a function that checks for lowercase character.
 */
int _islower(int c)
{
if (islower(c) != 0)
{
return (1);
}
else 
{
return (0);
}
}
