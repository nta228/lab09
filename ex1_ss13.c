#include <stdio.h>

void main()
{	int var=500, *ptr_var;
	ptr_var=&var;
	printf("\nthe value %d is stored at address: %u", var,&var);
	printf("\nthe value %u is stored at address: %u", ptr_var, &ptr_var);
	printf("\nthe value %d is stored at address: %u", *ptr_var, ptr_var);
}
