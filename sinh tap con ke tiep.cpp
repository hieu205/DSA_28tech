#include <bits/stdc++.h>
using namespace std;
int k, n, a[100], ok;
void ktao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) {
        --i;
    }
    if (i == 0) {
        for (int i = 1; i <= n; i++)
            a[i] = i;
    } else {
        int j = n;
        while (a[j] < a[i]) {
            --j;
        }
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
        sinh();
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}