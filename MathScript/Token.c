#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Token.h"

Token* token_initialize(TokenType tok_type, char* tok_value)
{
	Token* token = malloc(sizeof(Token));
	if (token == NULL)
	{
		printf("Error");
		exit(1);
	}
	token->type = tok_type;
	token->value = tok_value;
	return token;
}

void token_print(Token* token)
{
	TokenType toktype = token->type;
	char* toktype_str;
	char* tokvalue = token->value;
	switch (toktype)
	{
	case NUMBER: toktype_str = "NUMBER"; break;
	case PLUS: toktype_str = "PLUS"; break;
	case MINUS: toktype_str = "MINUS"; break;
	case STAR: toktype_str = "STAR"; break;
	case SLASH: toktype_str = "SLASH"; break;
	case LPAREN: toktype_str = "LPAREN"; break;
	case RPAREN: toktype_str = "RPAREN"; break;
	case TOKEN_EOF: toktype_str = "EOF"; break;
	default:  toktype_str = "UNKNOWN";
	}
	printf("%s : %s", tokvalue, toktype_str);
}
