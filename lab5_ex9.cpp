#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool is_palindrome = true;

    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            is_palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

