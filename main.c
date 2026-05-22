#include <stdio.h> 
#include "lexer.h"

int main(){
	char test[] = "Hello World!\n This is a test to see if this works!!";
	printf("%s",test);
	printf("%s",removeWhitespaces(test));
	return 0;
}
