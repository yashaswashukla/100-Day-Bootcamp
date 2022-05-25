#include <bits/stdc++.h>
using namespace std;
void del(string &s, int n)
{
    int i = n;
    for (i; i <= s.length(); i++)
    {
        s[i] = s[i + 1];
    }
}
int main()
{
    string s;
    cin >> s;
    int n = s.length(), i = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] < 'a')
            s[i] += 32;
    }

    while (i <= n)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i')
        {
            del(s, i);
            n--;
        }
        else
            i++;
    }
    for (i = 0; i < n; i++)
        cout << "." << s[i];
}