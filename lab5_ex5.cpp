#include <iostream>
#include <algorithm>
using namespace std;
//Наша функция
string reverseString(string str) {
    reverse(str.begin(), str.end()); // begin и ендом указываем с какого по какой символ делаем реверс
    return str;
}
//Как юзаем
int main() {
    string str;
    cout << "Enter a string: "<< endl;
    cin >> str;
    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
