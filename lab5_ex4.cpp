#include <iostream>
//#include <string>  https://learn.microsoft.com/ru-ru/cpp/standard-library/string?view=msvc-170 - доступное объяснение + эта библиотека импортируется по дефолту 
#include <algorithm> // Мне не пришло идей в голову , как можно реализовать сортировку и проверку строк , поэтому я обратился к этой библиотеке - https://learn.microsoft.com/ru-ru/cpp/standard-library/algorithm?view=msvc-170
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1); // Как оказалось , функция getline очень полезна и схожа с питоновским input()
    cout << "Enter the second string: ";
    getline(cin, str2);

    // Преобразуем строки в нижний регистр и сортируем символы
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "The strings are anagrams." << endl;
    }
    else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
