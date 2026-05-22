#ifndef LEXER_H
#define LEXER_H
extern const char *modeRef[];
extern const char *tokenRef[];
typedef enum { M_PARAM, M_CONDITIONAL, M_BODY, M_RETURN /*TODO*/} Mode;
typedef enum { I_FUNC, I_VAR, N_FUNC, N_VAR, TYPE, OPER /*TODO*/} Token;

char* removeWhitespaces(char code[]);
#endif 
