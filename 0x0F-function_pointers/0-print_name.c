#include "function_pointers.h"

/**
 * print_name - pronts name
 * @name: name
 * @f: function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
		return;
	(*f)(name);
}
