#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i, j;
    cin >> i >> j;
    int sum = 0;

    for (int k = i; k <= j; k++)
        sum += arr[k];

    cout << sum;
}