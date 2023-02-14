#include <iostream>
#include <string>

using namespace std; 

int main() {
    string firstString, secondString;

    cout << "Input first string: ";
    getline(cin, firstString);

    cout << "Input second string: ";
    getline(cin, secondString);

    cout << "Result of concatenation: " << firstString << secondString << endl;

    return 0;
}
