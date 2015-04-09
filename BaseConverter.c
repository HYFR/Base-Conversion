#include <stdio.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#include "BaseConverter.h"
	
char to_char(int n) {
	if (n >= 0 && n <= 9) {
		return n + '0';
	} else {
		return n - 10 + 'A';
	}
	return 0;
}


int to_i(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	else if (c >= 'A') {
		return 10 + c - 'A';
	}
	return 0;
}

int to_base10(char *number_string, int base) {
	
	int i, exponent, value;
	
	i = strlen(number_string) - 1;
	exponent = 0;
	value = 0;
	
	while (i >= 0) {
		value = value + to_i(number_string[i]) * pow(base, exponent);
		i--;
		exponent++;
	}
	return value;
}



void from_base10_to_desired_base(int number_to_convert, int to_base) {
	
	int remainder_saver[MAX_LEN] = { 0 }, quotient, remainder, location, x;
	
	location = 0;
	
	while (number_to_convert > 0) {
		quotient = number_to_convert / to_base;
		remainder = number_to_convert % to_base;
		number_to_convert = quotient;
		remainder_saver[location++] = to_char(remainder);
		
	}
	for (x = location - 1; x >= 0; --x) {
		printf("%c", remainder_saver[x]);
	}
}

// lines 60-61 were inspired by http://stackoverflow.com/questions/5604838/how-to-find-array-length-in-c
