#include <iostream>
#include <string>
using namespace std;

string longest_common_substring(string str1, string str2) {
    int len1 = str1.length(), len2 = str2.length();
    int maxlen = 0, endpos = 0;

    int** dp = new int* [len1 + 1];
    for (int i = 0; i <= len1; i++) {
        dp[i] = new int[len2 + 1];
    }

    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
            else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxlen) {
                    maxlen = dp[i][j];
                    endpos = i - 1;
                }
            }
            else {
                dp[i][j] = 0;
            }
        }
    }

    string lcs = str1.substr(endpos - maxlen + 1, maxlen);

    for (int i = 0; i <= len1; i++) {
        delete[] dp[i];
    }
    delete[] dp;

    return lcs;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    string lcs = longest_common_substring(str1, str2);

    cout << "The longest common substring is: " << lcs << endl;

    return 0;
}
