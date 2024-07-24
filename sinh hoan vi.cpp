#include <bits/stdc++.h>
using namespace std;

int n, ok, a[100];
void ktao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void sinh()
{
    int i = n - 1;
    while (a[i] > a[i + 1])
        --i;
    if (i == 0) {
        for (int i = 1; i <= n; i++)
            a[i] = i;
        ok = 0;
    } else {
        int j = n;
        while (a[j] < a[i])
            --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ktao();
        ok = 1;
        while (ok) {
            for (int i = 1; i <= n; i++)
                cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
