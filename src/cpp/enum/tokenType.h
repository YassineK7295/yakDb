#include <set>

#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

using namespace std;

enum TokenType {
    Exit,
    Quit,
    Help,

    Semicolon
};

static const set<TokenType> AllTypes = {
    Exit, Quit, Help
};

#endif