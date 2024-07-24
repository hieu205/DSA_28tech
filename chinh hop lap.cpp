#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], ok;

void ktao()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
        a[i] = 1;
}

void sinh()
{
    int i = k;
    while (a[i] == n && i >= 1)
        --i;
    if (i == 0)
        ok = 0;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = 1;
    }
}

int main()
{
    ktao();
    ok = 1;
    while (ok) {
        for (int i = 1; i <= k; i++)
            cout << a[i];
        cout << endl;
        sinh();
    }
}