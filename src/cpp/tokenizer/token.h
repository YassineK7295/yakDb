#include <string>
#include "../enum/tokenType.h"
#include "../enum/tokenGroup.h"

#ifndef TOKEN_H
#define TOKEN_H

class Token { // i.e. Meta -> Exit -> .exit OR Command -> Select -> select OR Other -> null -> table_name
    private:
        TokenGroup _group;
        TokenType _type;
        std::string _value;

    public:
        Token(const std::string value); // defaults to Other and null
        Token(const TokenGroup group, const TokenType type, const std::string value);
        void setTokenGroup(TokenGroup group);
        TokenGroup getTokenGroup() const;
        void setTokenType(const TokenType type);
        TokenType getTokenType() const;
        void setValue(const std::string value);
        std::string getValue() const;
};

#endif