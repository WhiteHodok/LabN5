#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int word_count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            word_count++;
        }
    }

    cout << "Number of words: " << word_count + 1 << endl;

    return 0;
}

