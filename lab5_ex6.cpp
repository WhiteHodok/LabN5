#include <iostream>
//#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    transform(str.begin(), str.end(), ::toupper);

    cout << "Uppercase string: " << str << endl;

    return 0;
}
