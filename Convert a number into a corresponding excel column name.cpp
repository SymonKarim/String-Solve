//*Bismillahir Rahmanir Raheem
//! symonkarim
#include <bits/stdc++.h>
#define ll long long
#define FASTER ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;


string solve(int n) {
    string temp;
    while (n > 0) {
        int x = (n - 1) % 26;
        temp = char(x + 'A') + temp;
        n = (n - 1) / 26;
    }
    return temp;
}
int main()
{
    FASTER
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int N; cout << "Enter the N(character Table Size):"; cin >> N;
    cout << endl;
    vector<bool>vis(N + 1, false); vis[0] = true;
    map<int, string>mp;
    int t; cin >> t; for (int i = 1; i <= N; i++) {
        int n = rand() % N + 1;
        while (vis[n]) {
            n = rand() % N + 1;
        }
        string s = solve(n);
        mp[n] = s;
        vis[n] = true;
    }
    for (auto i : mp) {
        cout << i.first << ": " << i.second << endl;
    }
}

