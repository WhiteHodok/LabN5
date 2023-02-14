#include <iostream>
#include <string>
using namespace std;
// Напишем функцию , чтобы в дальнейшем юзать её
int getLength(string str) {
    return str.length();
}

int main() {
    string str = "Hello, World!";
    cout << "Length of string \"" << str << "\" : " << getLength(str) << endl;
    return 0;
}
