//*Bismillahir Rahmanir Raheem
//! symonkarim
#include <bits/stdc++.h>
#define ll long long
#define FASTER ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

bool isPalindrome(string s , int low, int high) {
    return (low >= high) || (s[low] == s[high]) && isPalindrome(s, low + 1, high - 1);
}
string isRotatePalindrome(string s, int n) {

    for (int i = 1; i < n; i++) {
        rotate(s.begin(), s.begin() + 1, s.end());
        int x = isPalindrome(s, 0 , n - 1);
        if (x) return s;
    }
    return "Not isPalindrome";
}
int main()
{
    FASTER
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s = "CBAABCD";
    rotate(s.begin(), s.begin() + 2, s.end());
    cout << isRotatePalindrome(s, s.size()) << endl;
    //  int t; cin >> t; for (int i = 1; i <= t; i++)

}

