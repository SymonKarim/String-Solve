#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
bool check(string X, string Y)
{
    if (X.length() != Y.length()) {
        return false;
    }
 
    for (int i = 0; i < X.length(); i++)
    {
        rotate(X.begin(), X.begin() + 1, X.end());
        if (!X.compare(Y)) {
            return true;
        }
    }
    return false;
}
 
int main()
{
    string X = "ABCD";
    string Y = "DABC";
 
    if (check(X, Y)) {
        cout << "Given strings can be derived from each other";
    }
    else {
        cout << "Given strings cannot be derived from each other";
    }
 
    return 0;
}
