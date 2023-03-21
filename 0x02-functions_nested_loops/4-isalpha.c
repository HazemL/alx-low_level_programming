#include <stdio.h>
#include <ctype.h>
/*
 * Returns 1 if c is a letter, lowercase or uppercase
 *
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
if (isalpha(c) == 0)
{
return (0);
}
else
{
return (1);
}
}
