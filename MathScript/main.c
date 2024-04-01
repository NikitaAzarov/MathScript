#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Token.h"

int main()
{
	Token* tok = token_initialize(NUMBER, "98");
	token_print(tok);
}