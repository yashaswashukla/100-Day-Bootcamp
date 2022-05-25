#include <bits/stdc++.h>
using namespace std;
void convert(string &s1, string &s2)
{
    int n = s1.length();
    int m = s2.length();

    for (int i = 0; i < n; i++)
    {
        if (s1[i] >= 'a')
            s1[i] -= 32;
    }

    for (int i = 0; i < m; i++)
    {
        if (s2[i] >= 'a')
            s2[i] -= 32;
    }
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    convert(s1, s2);

    int n = s1.length();
    int m = s2.length();
    int k = 0;

    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            if (s1[i] > s2[i])
            {
                cout << "1\n";
                k = 0;
                break;
            }
            else if (s1[i] < s2[i])
            {
                cout << "-1\n";
                k = 0;
                break;
            }
            else
                k = 1;
        }
    }
    else if (n < m)
        cout << "-1\n";
    else if (n > m)
        cout << "1\n";

    if (k == 1)
        cout << "0\n";
}