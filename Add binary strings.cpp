#include<bits/stdc++.h>
string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
    string ans = "";
    int diff = abs(n-m);
    string tmp ="";
    while(diff--) tmp.push_back('0');
    if(n<m) a = tmp+a;
    else b = tmp+b;
    int i = a.size(), j = b.size(), carry = 0;
    while(i and j) {
        i--,j--;
        if(a[i]=='1' and b[j] == '1'){
            if(carry) {
                ans.push_back('1');
                carry = 1;
            }else{
                ans.push_back('0');
                carry = 1; 
            }
        }else if(a[i]=='0' and b[j] == '0'){
            if(carry) {
                ans.push_back('1');
                carry = 0;
            }else{
                ans.push_back('0');
                carry = 0; 
            }
        }else if(a[i]!=b[j]){
            if(carry) {
                ans.push_back('0');
                carry = 1;
            }else{
                ans.push_back('1');
                carry = 0; 
            }
        }
    }

    if(carry) ans.push_back('1');
    reverse(ans.begin(), ans.end());
    return ans;
}
