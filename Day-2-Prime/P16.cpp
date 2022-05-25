/*
https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P16
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int prime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    int tap = 0;
    for (int j = 1; j <= n; j++)
    {
        int pd = 0;

        for (int i = 2; i <= j; i++)
        {
            if (j % i == 0)
            {
                if (prime(i))
                    pd++;
            }
        }
        if (pd == 2)
            tap++;
    }
    cout << tap;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
}