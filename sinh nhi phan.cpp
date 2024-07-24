#include <bits/stdc++.h>
using namespace std;

int n, a[100], ok;
void ktao()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

void sinh()
{
    int i = n-1;
    while (i >= 0 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i == -1) {
        for (int i = 0; i < n; i++)
            a[i] = 1;
        ok = 0;
    }
    a[i] = 1;
}

int main()
{
    ktao();
    ok = 1;
    while (ok) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}
