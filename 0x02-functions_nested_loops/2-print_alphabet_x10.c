#include <stdio.h>
#include "main.h"
/**
 * print_alphabet-func print alphabet in lowercase
*/
void print_alphabet(void)
{
int l,ch;
for (l = 1 ; l <= 10 ; l++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
