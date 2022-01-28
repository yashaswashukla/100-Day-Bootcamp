#include <bits/stdc++.h>
using namespace std;
int phone(string s, int n)
{
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '8')
            e++;
    }
    n = n / 11;
    e = min(n, e);
    return e;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = phone(s, n);

    cout << ans;
}