#include <assert.h>
#include <stdio.h>

#include "BaseConverter.h"

int main(int argc, char *argv[])
{
	assert(to_i('A') == 10);
	assert(to_i('F') == 0xF);
	assert(to_char(10) == 'A');
	assert(to_char(0xF) == 'F'); 
	assert(to_base10("1234", 10) == 1234);
	assert(to_base10("FFFF", 16) == 65535);
	
	return 0;
}