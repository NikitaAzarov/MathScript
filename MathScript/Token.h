#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum TokenType {
    NUMBER, // [0-9]

    PLUS,   // +
    MINUS,  // -
    STAR,   // *
    SLASH,  // /
    LPAREN, // (
    RPAREN, // )
    TOKEN_EOF     // \0
 } TokenType;

typedef struct Token {
    TokenType type;
    char* value;
}Token;

Token* token_initialize(TokenType type, char* value);
void token_print(Token* token);
