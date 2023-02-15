//*Bismillahir Rahmanir Raheem
//! symonkarim
#include <bits/stdc++.h>
#define ll long long
#define FASTER ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;


string expand(string s, int low, int high) {
    while (low >= 0 and high < s.size() and s[low] == s[high]) {
        low--, high++;
    }
    return s.substr(low + 1, high - low - 1);
}
string findLongestPalindromeString(string str) {
    if (str.size() == 0) {return str;}
    string maxStr = "", currentStr;
    int maxStrLenght = 0, currentStrLength;

    for (int i = 0; i < str.size(); i++) {

        currentStr = expand(str, i, i);
        currentStrLength = currentStr.size();

        if (currentStrLength > maxStrLenght) {
            maxStr = currentStr;
            maxStrLenght = currentStrLength;
        }

        currentStr = expand(str, i, i + 1);
        currentStrLength = currentStr.size();

        if (currentStrLength > maxStrLenght) {
            maxStr = currentStr;
            maxStrLenght = currentStrLength;
        }

    }
    return maxStr;
}

int main()
{
    FASTER
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t; for (int i = 1; i <= t; i++) {
        string str; cin >> str;
        cout << findLongestPalindromeString(str);
    }

}

