#include "tokenType.h"
#include "tokenGroup.h"

#include "token.h"
    
Token::Token(const TokenGroup group, const TokenType type, const std::string value) {
    _group = group;
    _type = type;
    _value = value;
}

Token::Token(const std::string value) {
    _group = TokenGroup::Other;
    _value = value;
}