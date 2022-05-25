#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.length();
    for (int i = n / 2; i < s.length() - 1; i++)
        cout << s[i] << "+";
    cout << s[s.length() - 1];
}