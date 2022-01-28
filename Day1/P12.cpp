/*
Question Link:
https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P12
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rev(int arr[], int l, int r)
{
    while (r > l)
    {
        swap(arr[r], arr[l]);
        r--;
        l++;
    }
}

int sorted(int arr[], int n)
{
    bool res = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            res = false;
            return res;
        }
    }
    return res;
}
void solve()
{
    int n, l, r;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (sorted(arr, n))
    {
        cout << "yes\n";
        cout << "1 1\n";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                l = i;
                break;
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            if (arr[i - 1] > arr[i])
            {
                r = i;
                break;
            }
        }

        rev(arr, l, r);

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "no\n";
                return;
            }
        }

        cout << "yes\n";
        cout << l + 1 << " " << r + 1 << endl;
    }
}
int main()
{
    solve();
}