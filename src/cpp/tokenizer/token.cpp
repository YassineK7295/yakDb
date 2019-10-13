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

void Token::setTokenGroup(const TokenGroup group) {
    _group = group;
}

TokenGroup Token::getTokenGroup() const {
    return _group;
}

void Token::setTokenType(const TokenType type) {
    _type = type;
}

TokenType Token::getTokenType() const {
    return _type;
}

void Token::setValue(const std::string value) {
    _value = value;
}

std::string Token::getValue() const {
    return _value;
}