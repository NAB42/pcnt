/* 2026.05.21 Nathan Boulton
 * This Lexer is probably a little different from most Lexers. Given the delimiter is just
 * the fact that each token is one character, it processes things differently. Moreover, 
 * it uses different states to determine how to process a token. The same character can 
 * be used to represent different things, depending on what Mode it's in. 
 */
#include <stdio.h>
#include <regex.h>
#include <string.h>
#include "lexer.h"

const char *modeRef[] = {
	// TODO
};
const char *tokenRef[] = {
	// TODO 
};

char* removeWhitespaces(char code[]){
	int i = 0;
	int iteration = 0;
	while(i < strlen(code)){
		if(code[i] != ' ' && code[i] != '\n' && code[i] != '\t'){
			code[iteration] = code[i];
			iteration++;
		}
		i++;
	}
	code[iteration] = '\0';
	return code;
}
