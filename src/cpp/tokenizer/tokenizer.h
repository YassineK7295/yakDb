#include "token.h"
#include <iostream>

#ifndef TOKENIZER_H
#define TOKENIZER_N

using namespace std;

class Tokenizer {
    private:
        char _separator;
        vector<string> split_string(const string &str) const;
        Token getToken(const string str) const;

    public:
        Tokenizer();
        Tokenizer(const char separator);
        ~Tokenizer();
        vector<Token> tokenize(const string query) const;
};

#endif