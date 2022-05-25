#include <bits/stdc++.h>
using namespace std;
int maxone(string s)
{
    int k = 0, t = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            k++;
            t = max(k, t);
        }
        else
            k = 0;
    }
    return t + 1;
}
int main()
{
    string s;
    cin >> s;
    int one, zero;
    one = maxone(s);

    cout << ((one >= 7) ? "YES\n" : "NO\n") << endl;
}