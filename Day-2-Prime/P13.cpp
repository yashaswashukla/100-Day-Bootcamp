/*
Question Link:
*/

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define f(i, n) for (int i = 0; i < n; i++)
int prime(int a)
{
    bool prime = true;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return prime;
}
void solve()
{
    ull int a;
    cin >> a;
    if (a == 1)
    {
        cout << "4" << endl;
    }
    else if (prime(a))
    {
        cout << 2 * (a + 1) << endl;
    }
    else
    {
        ull int k = sqrt(a);
        if (k * k == a)
            cout << (2 * (k + k)) << endl;
        else
            cout << (2 * (k + k + 1)) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    while (T--)
    {
        solve();
    }
}klasdjfkljasf
faklsdjf
asdklfj
sdfkljasjd
