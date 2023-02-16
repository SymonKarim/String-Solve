//*Bismillahir Rahmanir Raheem
//! symonkarim
#include <bits/stdc++.h>
#define ll long long
#define FASTER ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void findInterleavings(string temp, string str, string st, auto& s) {
    if (!str.length() and !st.length()) {
        s.insert(temp);
        return;
    }
    if (str.size()) {
        findInterleavings(temp + str[0], str.substr(1),
                          st, s );
    }
    if (st.size()) {
        findInterleavings(temp + st[0], str,
                          st.substr(1), s);
    }
}

void solve(string str, string st) {
    unordered_set<string>s;
    if (!str.size() and !st.size()) {
        cout << "NULL" << endl;
    }

    findInterleavings("", str, st, s);
    cout << "Strings are: " << endl;
    for (auto i : s) {
        cout << i << endl;
    }
    return;
}
int main()
{
    FASTER
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t; for (int i = 1; i <= t; i++) {
        string str, st; cin >> str >> st;
        solve(str, st);
    }
}

/*input
str1= "ABC"
str2 = "ACB"
output:

ACBABC
AABCBC
ACABCB
ABCACB
AACBBC
ABACCB
ACABBC
ABACBC
AACBCB
AABCCB
