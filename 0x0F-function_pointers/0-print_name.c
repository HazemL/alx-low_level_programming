#include <stddef.h>
/**
*print_name -  function call another func to print array.
*@name: array of charchter .
*@f: function call back.
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;

f(name);
}

