#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0, cur = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] * 2 >= a[i + 1])
            ++cur;
        else
        {
            ans = max(ans, cur);
            cur = 0;
        }
    }
    ans = max(ans, cur);
    cout << ans + 1;
}