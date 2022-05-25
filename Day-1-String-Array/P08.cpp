#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, a;
    cin >> n >> l >> a;

    int ti = 0, li = 0;

    if (n > 0)
        cin >> ti >> li;

    int ans = ti / a;

    for (int i = 1; i < n; i++)
    {
        int t, l;
        cin >> t >> l;

        ans += (t - (ti + li)) / a;

        ti = t;
        li = l;
    }

    ans += (l - (ti + li)) / a;
    cout << ans << "\n";
}