#include <stdio.h>
#include "BaseConverter.h"

int main(int argc, char **argv) {
char number[MAX_LEN]; 	
	int num, from_base, to_base;
	
	printf ("Provide a number: ");
	scanf ("%s", number);
	printf ("What base is %s in? ", number);
	scanf ("%d", &from_base);
	printf ("%s is in base %d (%d in base 10)\n", number, from_base, to_base10(number, from_base));
	printf ("What base would you like to convert %s? ", number);
	scanf ("%d", &to_base);
	num = to_base10(number, from_base);
	printf ("\nYour number %d has been converted to\n", num);
	from_base10_to_desired_base(num, to_base);
	printf("\n");
	return 0;
}