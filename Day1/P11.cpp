#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, q = 0;
    cin >> n >> q;
    unordered_set<int> Hashx, Hashy, HashL, HashR;
    while (q--)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        if (Hashx.find(x) != Hashx.end() or Hashy.find(y) != Hashy.end() or HashL.find(x + y) != HashL.end() or
            HashR.find(x - y) != HashR.end())
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            Hashx.insert(x);
            Hashy.insert(y);
            HashL.insert(x + y);
            HashR.insert(x - y);
        }
    }
}