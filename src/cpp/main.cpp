#include <iostream>
#include <string>
#include <vector>
#include "./tokenizer/tokenizer.h"

using namespace std;

const string HORIZONTAL_BORDER = "##################################################";

int main() {
    Tokenizer tokenizer;
    bool quit = false;
    string str;

    cout << HORIZONTAL_BORDER << endl;
    cout << "Welcome to YakDb!\nQuery away!\n";
    cout << HORIZONTAL_BORDER << endl;

    while(!quit) {
        cout << "> "; 
        cin >> str;
        if(str.compare(".exit") || str.compare(".quit")) {
            quit = true;
            continue;
        }
        vector<Token> tokens = tokenizer.tokenize(str);
        // parse
        // execute
    }

    return 0;
}