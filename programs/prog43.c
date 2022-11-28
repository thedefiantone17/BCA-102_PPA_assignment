#include <stdio.h>

int main(void)
{
	/* i is stored in read only area*/
	int const i = 10;
	int j = 20;

	/* pointer to integer constant. Here i
	is of type "const int", and &i is of
	type "const int *". And p is of type
	"const int", types are matching no issue */
	int const *ptr = &i;	

	printf("ptr: %d\n", *ptr);

	/* error */
	*ptr = 100;	

	/* valid. We call it up qualification. In
	C/C++, the type of "int *" is allowed to up
	qualify to the type "const int *". The type of
	&j is "int *" and is implicitly up qualified by
	the compiler to "const int *" */

	ptr = &j;		
	printf("ptr: %d\n", *ptr);

	return 0;
}
