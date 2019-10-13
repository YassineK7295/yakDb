#include "tokenizer.h"
#include <vector>
#include <string>
#include "algorithm"

using namespace std;

Tokenizer::Tokenizer() {
    _separator = ' ';
}

Tokenizer::Tokenizer(const char sep) {
    _separator = sep;
}

vector<Token> Tokenizer::tokenize(const string query) const {
    vector<string> words = Tokenizer::split_string(query);
    vector<Token> tokens;

    for(int i = 0; i < words.size(); i++) {
        tokens.push_back(Tokenizer::getToken(words[i]));
    }

    return tokens;
}

vector<string> Tokenizer::split_string(const string &str) const {
    vector<string> words; 
    string word = "";

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == _separator) {
            words.push_back(word);
            word = "";
            continue;
        }
        word += str[i];
        if(i == str.size()-1) words.push_back(word);
    }

    return words;
}

Token Tokenizer::getToken(const string str) const {
    if(str.compare(";")) return Token(TokenGroup::Command, TokenType::Semicolon, str);
}