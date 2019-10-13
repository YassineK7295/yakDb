#ifndef TOKEN_GROUP_H
#define TOKEN_GROUP_H

enum TokenGroup {
    Meta,       // .exit, .quit, .tables
    Command,    // SELECT
    Other       // table_name
};

static const TokenGroup AllGroups[] = {
    Meta, Command, Other
};

#endif