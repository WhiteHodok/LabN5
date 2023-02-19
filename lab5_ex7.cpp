#include <iostream>
//#include <string>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to replace: ";
    cin >> ch;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            str[i] = ' ';
        }
    }

    cout << "String with replaced characters: " << str << endl;

    return 0;
}

