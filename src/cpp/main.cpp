#include <iostream>
#include <string>

using namespace std;

const string HORIZONTAL_BORDER = "##################################################";
enum Meta { HELP, EXIT, QUIT };

int main() {
    bool quit = false;
    string str;

    cout << HORIZONTAL_BORDER << endl;
    cout << "Welcome to YakDb!\nQuery away!\n";
    cout << HORIZONTAL_BORDER << endl;

    while(!quit) {
        cout << "> "; 
        cin >> str;
    }

    return 0;
}