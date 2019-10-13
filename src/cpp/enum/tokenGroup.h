#ifndef TOKEN_GROUP_H
#define TOKEN_GROUP_HTOKEN_TYPE_H

enum TokenGroup {
    Meta,       // .exit, .quit, .tables
    Command,    // SELECT
    Other       // table_name
};

//extern TokenType Type;

#endif