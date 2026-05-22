/* 2026.05.21 Nathan Boulton
 * This Lexer is probably a little different from most Lexers. Given the delimiter is just
 * the fact that each token is one character, it processes things differently. Moreover, 
 * it uses different states to determine how to process a token. The same character can 
 * be used to represent different things, depending on what Mode it's in. 
 */
#include <stdio.h>
#include <regex.h>

typedef enum { M_PARAM, M_CONDITIONAL, M_BODY, M_RETURN /*TODO*/} Mode;
typedef enum { I_FUNC, I_VAR, N_FUNC, N_VAR, TYPE, OPER /*TODO*/} Token; 
